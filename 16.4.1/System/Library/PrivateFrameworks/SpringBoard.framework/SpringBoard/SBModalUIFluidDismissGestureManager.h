@class SBHomeGestureInteraction, SBModalUIFluidDismissGestureWorkspaceTransaction, NSString, SBHomeGestureSettings, SBWindowScene, SBSystemGestureManager;

@interface SBModalUIFluidDismissGestureManager : NSObject <SBHomeGesturePanGestureRecognizerInterfaceDelegate, BSTransactionObserver, PTSettingsKeyObserver, SBHomeGestureInteractionDelegate>

@property (readonly, nonatomic) SBSystemGestureManager *systemGestureManager;
@property (readonly, weak, nonatomic) SBWindowScene *windowScene;
@property (retain, nonatomic) SBHomeGestureSettings *homeGestureSettings;
@property (retain, nonatomic) SBHomeGestureInteraction *homeGestureInteraction;
@property (retain, nonatomic) SBModalUIFluidDismissGestureWorkspaceTransaction *currentTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)homeGestureInteractionCancelled:(id)a0;
- (long long)_dismissalTypeForCurrentContext;
- (void)transactionDidComplete:(id)a0;
- (id)viewForSystemGestureRecognizer:(id)a0;
- (void)_addOrRemoveGestureForCurrentSettings;
- (void)homeGestureInteractionChanged:(id)a0;
- (BOOL)homeGestureInteraction:(id)a0 shouldReceiveTouch:(id)a1;
- (void)homeGestureInteractionEnded:(id)a0;
- (long long)touchInterfaceOrientationForGestureRecognizer:(id)a0;
- (void)homeGestureInteractionBegan:(id)a0;
- (id)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(id)a0;
- (unsigned long long)homeGestureInteraction:(id)a0 systemGestureTypeForType:(long long)a1;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)handleGestureChanged:(id)a0;
- (id)initWithWindowScene:(id)a0 systemGestureManager:(id)a1;
- (void)handleGestureEnded:(id)a0;
- (void)handleGestureBegan:(id)a0 initiatedFromBottomEdge:(BOOL)a1 dismissalThreshold:(double)a2 initiatedFromIndirectEdge:(BOOL)a3;
- (void)handleGestureBegan:(id)a0 initiatedFromBottomEdge:(BOOL)a1;
- (void).cxx_destruct;

@end
