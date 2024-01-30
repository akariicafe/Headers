@class AVCStatisticsCollector, NSObject;
@protocol OS_dispatch_source;

@interface VCVideoStreamRateAdaptationFeedbackOnly : VCVideoStreamRateAdaptation {
    NSObject<OS_dispatch_source> *_rateControlFeedbackSource;
    AVCStatisticsCollector *_statisticsCollector;
    BOOL _useLowPrecisionEchoTimeStamp;
    unsigned int _previousRTPTimestamp;
    unsigned int _totalPacketsReceived;
    unsigned int _lastTimestamp;
    double _lastTimestampReceiveTime;
}

@property (nonatomic) BOOL didReceiveVideo;

- (void)dealloc;
- (id)initWithRTPHandle:(struct tagHANDLE { int x0; } *)a0 reportingAgent:(struct opaqueRTCReporting { } *)a1 receiverStats:(id)a2 dumpID:(unsigned int)a3 reportingParentID:(int)a4 statisticsCollector:(id)a5 lowTimestampPrecision:(BOOL)a6;
- (double)owrd;
- (void)sendRateControlFeedback;
- (void)setEnableRateAdaptation:(BOOL)a0 maxBitrate:(unsigned int)a1 minBitrate:(unsigned int)a2 adaptationInterval:(double)a3;
- (void)startFeedbackSource;
- (void)stopFeedbackSource;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)a0 sampleRate:(unsigned int)a1 time:(double)a2 size:(unsigned int)a3 endOfFrame:(BOOL)a4;
- (void)updateRateControlInfoWithStatisticsMessage:(struct tagVCStatisticsMessage { int x0; int x1; double x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; union { struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; double x6; double x7; double x8; double x9; double x10; char x11[64]; int x12; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; double x12; double x13; unsigned int x14; unsigned int x15; double x16; unsigned int x17; BOOL x18; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x19; struct { unsigned short x0; BOOL x1; BOOL x2; unsigned int x3; } x20; } x1; struct { double x0; double x1; double x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; unsigned int x9; } x2; struct { unsigned int x0; BOOL x1; BOOL x2; BOOL x3; unsigned int x4; unsigned int x5; double x6; unsigned int x7; BOOL x8; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x9; } x3; struct { unsigned char x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; double x10; double x11; double x12; double x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; } x4; struct { unsigned int x0; unsigned int x1; unsigned int x2; double x3; } x5; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x6; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x7; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6; unsigned int x7; } x8; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; float x4; BOOL x5; BOOL x6; double x7; double x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned long long x12; } x9; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned long long x9; int x10; unsigned int x11; union { struct { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; float x11; BOOL x12; unsigned short x13; unsigned int x14[6]; } x0; struct { unsigned char x0; short x1; short x2; char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned short x8; unsigned short x9; unsigned char x10; } x1; } x12; } x10; struct tagVCStatisticsVideoLossFeedback { unsigned int x0; unsigned short x1; unsigned char x2; unsigned char x3; } x11; } x7; })a0;

@end
