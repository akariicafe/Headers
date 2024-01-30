@class CAReporter, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AVVCMetricsManager : NSObject {
    NSObject<OS_dispatch_queue> *mWorkQueue;
    CAReporter *mMetricsReporter;
    long long mAudioIssueDetector;
    unsigned long long mAudioDataAnalysisSiriSession;
}

@property (retain) NSMutableDictionary *publicMetrics;
@property (retain) NSMutableDictionary *avvcProfilingInfoDictionary;
@property (nonatomic) unsigned long long voiceTriggerStartHostTime;
@property (nonatomic) unsigned long long callToStartRecordHostTime;

+ (id)sharedManager;
+ (void *)getLock;
+ (void)createSharedManager;
+ (void)destroySharedManager;

- (void)updateWithReporterID:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)retrieveMetrics;
- (void)checkAndUpdateReporterID:(long long)a0;
- (id)getStringDate:(id)a0;
- (void)resetProfileMetrics;
- (id)retrieveProfileMetrics;
- (BOOL)measureElapseTimeForMetric:(id)a0 block:(id /* block */)a1;
- (int)setAudioIssueDetectorFormat:(struct CAStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0 numFrames:(unsigned int)a1;
- (int)audioIssueDetectorAnalyzeBuffer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; })a0 numFrames:(unsigned int)a1 timeStamp:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)a2 shouldAnalyze:(BOOL)a3;
- (int)resetAudioIssueDetector;
- (int)setADAMFormat:(struct CAStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0 numFrames:(unsigned int)a1;
- (int)adamAnalyzeBuffer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; })a0 numFrames:(unsigned int)a1 timeStamp:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)a2 shouldAnalyze:(BOOL)a3;
- (int)resetADAM;
- (void)logSessionMetric:(id)a0 value:(id)a1 category:(unsigned int)a2 type:(unsigned short)a3 reporterID:(long long)a4;
- (void)logSessionMetric:(id)a0 value:(id)a1 category:(unsigned int)a2 type:(unsigned short)a3 context:(id)a4 reporterID:(long long)a5;
- (void)logSingleMetric:(id)a0 value:(id)a1 category:(unsigned int)a2 type:(unsigned short)a3 reporterID:(long long)a4;
- (void)logRecordAudioFormat:(struct CAStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0 reporterID:(long long)a1;
- (void)logRecordRoute:(id)a0 andPlaybackRoute:(id)a1 reporterID:(long long)a2;
- (void)logProfileMetrics:(id)a0;

@end
