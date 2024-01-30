@class NSUserDefaults, ATXCoreDuetContextHelper, ATXAnchorModelPredictionScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface ATXAnchorModelInferenceEngine : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    ATXAnchorModelPredictionScheduler *_predictionScheduler;
    _Atomic BOOL _started;
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_defaults;
}

+ (id)sharedInstance;

- (void)handleLOIExit;
- (void)unregisterAnchorEventListenerForAnchor:(id)a0;
- (id /* block */)exitCallbackForAnchor:(id)a0;
- (void)registerForAnchorExit:(id)a0 cdContext:(id)a1;
- (void)handleLOIEntrance;
- (id)exitNotificationIdentifierForAnchor:(id)a0;
- (void)retryPreviouslyIncompleteInference;
- (void)handleInferenceEvent:(id)a0;
- (void)registerForAnchorEntrance:(id)a0 cdContext:(id)a1;
- (void)dealloc;
- (void)registerAnchorEventListenerForAnchor:(id)a0;
- (void)handleAnchorEventForGymArrival;
- (void)setupContextStoreListenerForAnchor:(id)a0 context:(id)a1;
- (void)handleAnchorExitEventForGymArrival;
- (void)handleAnchorEventForIdleTimeBegin;
- (void)handleAnchorEventForAnchor:(id)a0;
- (id)currentDuetEventForAnchor:(id)a0;
- (id)init;
- (void)unregisterAnchorEventListeners;
- (void)start;
- (id /* block */)entranceCallbackForAnchor:(id)a0;
- (void)registerForWakingNotificationForAnchor:(id)a0 cdContext:(id)a1;
- (void)queueHandleInferenceEvent:(id)a0;
- (void)registerAnchorEventListeners;
- (id)notificationIdentifierForAnchor:(id)a0;
- (void)handleAnchorEventForMicrolocationVisitAnchor;
- (void).cxx_destruct;
- (id)supportedAnchorsForInference;

@end
