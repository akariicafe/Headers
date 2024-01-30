@class STYAbcHelper, NSDate, NSObject, SignpostSupportObjectExtractor;
@protocol OS_dispatch_queue;

@interface STYSignpostsMonitor : NSObject

@property (retain) SignpostSupportObjectExtractor *notificationExtractor;
@property (retain) SignpostSupportObjectExtractor *appLaunchNotificationExtractor;
@property (retain) NSObject<OS_dispatch_queue> *spObjectProcessingQueue;
@property (retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain) NSDate *lastTailspinRequestForDelayedNotifications;
@property (retain) NSDate *lastTailspinRequest;
@property unsigned int timeToReconnectWithDiagnosticd;
@property unsigned int eventCount;
@property BOOL autoUploadThroughAbc;
@property BOOL seedUserMode;
@property (retain) STYAbcHelper *abcHelper;
@property unsigned int backOffTimetoReconnectWithDiagnosticd;

+ (id)sharedMonitor;

- (void)setupSignpostPipeline;
- (void)stopMonitoringSignposts;
- (void)reportLatencyToReceiveSignposts:(id)a0;
- (void)notificationStreamTerminated:(id)a0 unmatchedIntervalStarts:(id)a1;
- (BOOL)startListeningForNotifications;
- (void)processAppLaunch:(id)a0 tailspinFilenamePrefix:(id)a1 duration:(id)a2 andPID:(id)a3;
- (void)appLaunchNotificationStreamTerminated:(id)a0 unmatchedIntervalStarts:(id)a1;
- (id)tailspinFilenamePrefixForInterval:(id)a0;
- (void)processInterval:(id)a0;
- (BOOL)startStreamingSignposts;
- (id)initPrivate;
- (void)processEmittedEvent:(id)a0;
- (void)perfProblemDetectedOnMac:(id)a0;
- (void)perfProblemDetected:(id)a0 tailspinFilenamePrefix:(id)a1;
- (void)stopMonitoringAppLaunchSignposts;
- (BOOL)monitorAppLaunchSignposts;
- (void)setupNotificationPipeline;
- (void)processAppLaunchInterval:(id)a0;
- (BOOL)monitorSignposts:(BOOL)a0;
- (void).cxx_destruct;

@end
