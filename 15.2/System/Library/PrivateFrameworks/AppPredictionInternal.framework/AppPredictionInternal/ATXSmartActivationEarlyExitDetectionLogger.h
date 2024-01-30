@class BPSSink, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface ATXSmartActivationEarlyExitDetectionLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
}

+ (id)sharedInstance;

- (void)stopListening;
- (void).cxx_destruct;
- (id)init;
- (void)_registerForModeChangeNotifications;
- (void)_processNewUserFocusComputedModeEvent:(id)a0;
- (BOOL)_logEventIfEarlyExit:(id)a0;

@end
