@class BPSSink, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface ATXSmartActivationEarlyExitDetectionLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
}

+ (id)sharedInstance;

- (void)stopListening;
- (void)_processNewUserFocusComputedModeEvent:(id)a0;
- (id)init;
- (void)_registerForModeChangeNotifications;
- (BOOL)_logEventIfEarlyExit:(id)a0;
- (void).cxx_destruct;

@end
