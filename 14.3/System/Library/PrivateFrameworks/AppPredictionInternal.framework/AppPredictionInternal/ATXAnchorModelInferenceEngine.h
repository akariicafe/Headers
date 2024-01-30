@class ATXCoreDuetContextHelper, ATXAnchorModelPredictionScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface ATXAnchorModelInferenceEngine : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    ATXAnchorModelPredictionScheduler *_predictionScheduler;
    _Atomic BOOL _started;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)notificationIdentifierForAnchor:(id)a0;
- (id)init;
- (void)registerAnchorEventListenerForAnchor:(id)a0;
- (void).cxx_destruct;
- (id)exitNotificationIdentifierForAnchor:(id)a0;
- (void)handleAnchorEventForAnchor:(id)a0;
- (id /* block */)entranceCallbackForAnchor:(id)a0;
- (void)handleInferenceEvent:(id)a0;
- (void)registerForAnchorExit:(id)a0 cdContext:(id)a1;
- (void)registerForWakingNotificationForAnchor:(id)a0 callback:(id /* block */)a1 cdContext:(id)a2;
- (void)setupContextStoreListenerForAnchor:(id)a0 context:(id)a1;
- (id /* block */)exitCallbackForAnchor:(id)a0;
- (void)registerForAnchorEntrance:(id)a0 cdContext:(id)a1;
- (void)start;
- (void)registerAnchorEventListeners;
- (void)retryPreviouslyIncompleteInference;
- (id)supportedAnchorsForInference;
- (id)currentDuetEventForAnchor:(id)a0;

@end
