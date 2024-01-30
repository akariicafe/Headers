@class FigCaptureDisplayLayoutMonitor, NSObject;
@protocol OS_dispatch_queue;

@interface BWAutoFocusPositionSensorMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_apsMonitorQueue;
    FigCaptureDisplayLayoutMonitor *_displayLayoutMonitor;
}

+ (id)sharedInstance;
+ (void)initialize;
+ (void)logStillImageAPSStatistics:(id)a0;
+ (void)processAPSOffsetEstimatorInfo:(id)a0 portType:(id)a1;
+ (void)logVideoRecordingAPSStatistics:(struct BWAPSStatistics { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; } *)a0;
+ (void)clientHasBeenBackgrounded;

- (void)logStillImageAPSStatistics:(id)a0;
- (id)init;
- (void)processAPSOffsetEstimatorInfo:(id)a0 portType:(id)a1;
- (void)logVideoRecordingAPSStatistics:(struct BWAPSStatistics { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; } *)a0;
- (void)dealloc;
- (void)clientHasBeenBackgrounded;
- (void)_processAPSOffsetEstimatorInfo:(id)a0 portType:(id)a1;
- (void)_reportStillImageAPSStatisticsToAggd:(id)a0;
- (void)_logStillImageAPSStatistics:(id)a0;
- (void)_reportVideoRecordingAPSStatisticsToAggd:(struct BWAPSStatistics { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; } *)a0;
- (void)_logVideoRecordingAPSStatistics:(struct BWAPSStatistics { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; } *)a0;
- (void)_postMagneticDetectionUserNotification;
- (int)_highMagneticFieldCountOfOtherCameras:(id)a0 portType:(id)a1;
- (void)_reportAPSOffsetEstimatorInfoToAggdAndCoreAnalytics:(id)a0 portType:(id)a1;
- (void)_logAPSOffsetEstimatorInfo:(id)a0 portType:(id)a1;
- (id)_getLogFileHandle;
- (void)_appendApsMotionData:(id)a0 sphereMotionData:(id)a1 toDataString:(id)a2;

@end
