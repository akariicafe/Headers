@class AVCStatisticsCollector, NSObject;
@protocol OS_dispatch_source;

@interface VCVideoStreamRateAdaptationFeedbackOnly : VCVideoStreamRateAdaptation {
    AVCStatisticsCollector *_statisticsCollector;
    NSObject<OS_dispatch_source> *_rateControlFeedbackSource;
    BOOL _useLowPrecisionEchoTimeStamp;
    unsigned int _previousRTPTimestamp;
    unsigned int _totalPacketsReceived;
    unsigned int _lastTimestamp;
    double _lastTimestampReceiveTime;
}

@property (nonatomic) BOOL didReceiveVideo;

- (double)owrd;
- (void)dealloc;
- (id)initWithRTPHandle:(struct tagHANDLE { int x0; } *)a0 reportingAgent:(struct opaqueRTCReporting { } *)a1 receiverStats:(id)a2 dumpID:(unsigned int)a3 reportingParentID:(int)a4 statisticsCollector:(id)a5 lowTimestampPrecision:(BOOL)a6;
- (void)setEnableRateAdaptation:(BOOL)a0 maxBitrate:(unsigned int)a1 minBitrate:(unsigned int)a2 adaptationInterval:(double)a3;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)a0 sampleRate:(unsigned int)a1 time:(double)a2 size:(unsigned int)a3 endOfFrame:(BOOL)a4;
- (void)updateRateControlInfoWithStatisticsMessage:(struct { int x0; double x1; BOOL x2; BOOL x3; BOOL x4; union { struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; double x5; double x6; double x7; double x8; double x9; char x10[64]; int x11; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; double x11; double x12; unsigned int x13; unsigned int x14; double x15; unsigned int x16; BOOL x17; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x18; } x1; struct { double x0; double x1; double x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; unsigned int x9; } x2; struct { unsigned int x0; BOOL x1; BOOL x2; BOOL x3; unsigned int x4; unsigned int x5; double x6; unsigned int x7; BOOL x8; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x9; } x3; struct { unsigned char x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; double x10; double x11; double x12; unsigned int x13; unsigned int x14; unsigned int x15; } x4; struct { unsigned int x0; unsigned int x1; unsigned int x2; double x3; } x5; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x6; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x7; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } x8; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; BOOL x4; unsigned int x5; unsigned int x6; unsigned int x7; } x9; struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; int x9; unsigned int x10; } x10; } x5; })a0;
- (void)stopFeedbackSource;
- (void)startFeedbackSource;
- (void)sendRateControlFeedback;

@end
