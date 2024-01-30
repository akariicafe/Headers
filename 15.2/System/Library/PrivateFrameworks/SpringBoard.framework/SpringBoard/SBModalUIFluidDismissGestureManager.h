@class SBHomeGestureInteraction, SBModalUIFluidDismissGestureWorkspaceTransaction, NSString, SBHomeGestureSettings, SBTransientOverlayPresentationManager, SBAssistantController;

@interface SBModalUIFluidDismissGestureManager : NSObject <SBHomeGesturePanGestureRecognizerInterfaceDelegate, BSTransactionObserver, PTSettingsKeyObserver, SBHomeGestureInteractionDelegate>

@property (readonly, nonatomic) SBTransientOverlayPresentationManager *transientOverlayPresentationManager;
@property (readonly, nonatomic) SBAssistantController *assistantController;
@property (retain, nonatomic) SBHomeGestureSettings *homeGestureSettings;
@property (retain, nonatomic) SBHomeGestureInteraction *homeGestureInteraction;
@property (retain, nonatomic) SBModalUIFluidDismissGestureWorkspaceTransaction *currentTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)transactionDidComplete:(id)a0;
- (long long)touchInterfaceOrientationForGestureRecognizer:(id)a0;
- (void)handleGestureBegan:(id)a0 initiatedFromBottomEdge:(BOOL)a1;
- (void)_addOrRemoveGestureForCurrentSettings;
- (void)homeGestureInteractionChanged:(id)a0;
- (BOOL)homeGestureInteraction:(id)a0 shouldReceiveTouch:(id)a1;
- (void)handleGestureEnded:(id)a0;
- (long long)_dismissalTypeForCurrentContext;
- (id)initWithTransientOverlayPresentationManager:(id)a0 assistantController:(id)a1;
- (void)homeGestureInteractionCancelled:(id)a0;
- (void)handleGestureBegan:(id)a0 initiatedFromBottomEdge:(BOOL)a1 dismissalThreshold:(double)a2 initiatedFromIndirectEdge:(BOOL)a3;
- (void)handleGestureChanged:(id)a0;
- (void).cxx_destruct;
- (void)homeGestureInteractionEnded:(id)a0;
- (id)viewForSystemGestureRecognizer:(id)a0;
- (void)homeGestureInteractionBegan:(id)a0;
- (unsigned long long)homeGestureInteraction:(id)a0 systemGestureTypeForType:(long long)a1;

@end
