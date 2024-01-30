@class NSString, NSProgress;
@protocol UIActivityContinuationManagerApplicationContext;

@interface UIActivityContinuationManager : NSObject <NSUserActivityDelegate> {
    id<UIActivityContinuationManagerApplicationContext> _context;
}

@property (copy, nonatomic, getter=_currentActivityContinuationType, setter=_setCurrentActivityContinuationType:) NSString *currentActivityContinuationType;
@property (copy, nonatomic, getter=_currentActivityContinuationUUIDString, setter=_setCurrentActivityContinuationUUIDString:) NSString *currentActivityContinuationUUIDString;
@property (retain, nonatomic, getter=_currentActivityContinuationProgress, setter=_setCurrentActivityContinuationProgress:) NSProgress *currentActivityContinuationProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_didFailToContinueUserActivityWithType:(id)a0 error:(id)a1;
- (id)activityContinuationDictionaryWithAction:(id)a0 sourceApplication:(id)a1 originatingProcess:(id)a2;
- (void)_userActivityWillSave:(id)a0;
- (void)_endCurrentActivityContinuationWithCompletion:(id /* block */)a0;
- (void)_displayCurrentActivityContinuationProgressUI;
- (BOOL)activityContinuationsAreBeingTracked;
- (void)userActivityWillSave:(id)a0;
- (void)removeResponder:(id)a0 document:(id)a1 forUserActivity:(id)a2;
- (id)_fetchUserActivityWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_continueUserActivity:(id)a0;
- (id)initWithApplicationContext:(id)a0;
- (id)init;
- (BOOL)_delegateHandledContinueActivityWithType:(id)a0;
- (void)_cleanupUserActivity:(id)a0 activityIdentifier:(id)a1;
- (void)_clearCurrentActivityContinuationCancelingProgress:(BOOL)a0;
- (void)_hideCurrentActivityContinuationProgressUI;
- (void).cxx_destruct;
- (void)addResponder:(id)a0 document:(id)a1 forUserActivity:(id)a2;
- (void)_endCurrentActivityContinuationAndDisplayError:(id)a0;
- (void)handleActivityContinuation:(id)a0 isSuspended:(BOOL)a1;

@end
