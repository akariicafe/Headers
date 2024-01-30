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

- (void)setupContextStoreListenerForAnchor:(id)a0 context:(id)a1;
- (void)registerAnchorEventListeners;
- (void)registerForWakingNotificationForAnchor:(id)a0 cdContext:(id)a1;
- (id /* block */)entranceCallbackForAnchor:(id)a0;
- (void)registerForAnchorEntrance:(id)a0 cdContext:(id)a1;
- (void)start;
- (id /* block */)exitCallbackForAnchor:(id)a0;
- (id)currentDuetEventForAnchor:(id)a0;
- (void)handleAnchorEventForAnchor:(id)a0;
- (void)unregisterAnchorEventListenerForAnchor:(id)a0;
- (void).cxx_destruct;
- (void)handleLOIExit;
- (void)handleLOIEntrance;
- (id)init;
- (id)exitNotificationIdentifierForAnchor:(id)a0;
- (id)supportedAnchorsForInference;
- (void)handleInferenceEvent:(id)a0;
- (void)registerForAnchorExit:(id)a0 cdContext:(id)a1;
- (void)registerAnchorEventListenerForAnchor:(id)a0;
- (void)unregisterAnchorEventListeners;
- (void)dealloc;
- (void)handleAnchorEventForMicrolocationVisitAnchor;
- (id)notificationIdentifierForAnchor:(id)a0;
- (void)retryPreviouslyIncompleteInference;
- (void)handleAnchorEventForIdleTimeBegin;

@end
