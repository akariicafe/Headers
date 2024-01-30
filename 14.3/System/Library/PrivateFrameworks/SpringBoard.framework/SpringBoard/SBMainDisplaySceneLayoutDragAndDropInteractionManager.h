@class NSString, NSMapTable, SBDragAndDropAppActivationWorkspaceTransaction, SBFluidSwitcherViewController, SBMainDisplaySceneLayoutViewController, UIDropInteraction, SBWindowDragInteraction;
@protocol SBMainDisplaySceneLayoutDragAndDropInteractionManagerDelegate, UIDragSession;

@interface SBMainDisplaySceneLayoutDragAndDropInteractionManager : NSObject <BSTransactionObserver, SBApplicationDropSessionSceneProviding, UIDropInteractionDelegate_Private, UIDragInteractionDelegate_Private, UIDragInteractionDelegate_ForWebKitOnly, SBDragAndDropAppActivationWorkspaceTransactionDelegate>

@property (readonly, weak, nonatomic) SBFluidSwitcherViewController *mainSwitcherContentController;
@property (readonly, weak, nonatomic) SBMainDisplaySceneLayoutViewController *sceneLayoutViewController;
@property (readonly, weak, nonatomic) id<SBMainDisplaySceneLayoutDragAndDropInteractionManagerDelegate> delegate;
@property (retain, nonatomic) UIDropInteraction *dropInteraction;
@property (retain, nonatomic) SBDragAndDropAppActivationWorkspaceTransaction *activeTransaction;
@property (retain, nonatomic) NSMapTable *activeDropSessions;
@property (retain, nonatomic) SBWindowDragInteraction *windowDragInteraction;
@property (retain, nonatomic) id<UIDragSession> windowDragSession;
@property (copy, nonatomic) id /* block */ windowDragSessionPrepareCompletionBlock;
@property (retain, nonatomic) NSString *windowDragSceneIdentifier;
@property (nonatomic) BOOL windowDragHandledByDruid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (id)_requiredContextIDsForDragSessionInView:(id)a0;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (void)transactionDidComplete:(id)a0;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (void)_dragInteractionDidCancelLiftWithoutDragging:(id)a0;
- (void)dropInteraction:(id)a0 concludeDrop:(id)a1;
- (id)_dragInteraction:(id)a0 customSpringAnimationBehaviorForCancellingItem:(id)a1;
- (id)dropInteraction:(id)a0 previewForDroppingItem:(id)a1 withDefault:(id)a2;
- (void)dropInteraction:(id)a0 item:(id)a1 willAnimateDropWithAnimator:(id)a2;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void).cxx_destruct;
- (void)dragInteraction:(id)a0 sessionDidMove:(id)a1;
- (id)initWithMainSwitcherContentController:(id)a0 sceneLayoutViewController:(id)a1 delegate:(id)a2;
- (void)dragInteraction:(id)a0 sessionWillBegin:(id)a1;
- (void)dealloc;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (id)_dropInteraction:(id)a0 customSpringAnimationBehaviorForDroppingItem:(id)a1;
- (void)dragInteraction:(id)a0 willAnimateLiftWithAnimator:(id)a1 session:(id)a2;
- (void)dragInteraction:(id)a0 session:(id)a1 willEndWithOperation:(unsigned long long)a2;
- (void)dragInteraction:(id)a0 session:(id)a1 didEndWithOperation:(unsigned long long)a2;
- (void)_dragInteraction:(id)a0 prepareForSession:(id)a1 completion:(id /* block */)a2;
- (id)dragInteraction:(id)a0 previewForCancellingItem:(id)a1 withDefault:(id)a2;
- (void)dragInteraction:(id)a0 item:(id)a1 willAnimateCancelWithAnimator:(id)a2;
- (id)newSceneIdentityForApplication:(id)a0;
- (BOOL)dragInteraction:(id)a0 sessionIsRestrictedToDraggingApplication:(id)a1;
- (id)preferredSceneIdentityForApplication:(id)a0 targetContentIdentifier:(id)a1 preferNewScene:(BOOL)a2;
- (id)mostRecentSceneIdentityExcludingLiveScenesForApplication:(id)a0;
- (void)_beginTrackingDropSessionIfNeeded:(id)a0;
- (void)_windowDragSessionDidEnd;
- (BOOL)_anyActiveAndVisibleSceneEntityMatches:(id /* block */)a0;
- (id)_activeAndVisibleSceneIdentifiersForApplication:(id)a0;
- (void)_dismissInlineAppExposeIfNeeded;
- (BOOL)_workspaceWouldAllowTransitionToApplication:(id)a0;
- (BOOL)isApplicationActiveAndVisible:(id)a0;
- (void)dragAndDropTransaction:(id)a0 didBeginGesture:(id)a1;
- (void)dragAndDropTransaction:(id)a0 didUpdateGesture:(id)a1;
- (void)dragAndDropTransaction:(id)a0 didEndGesture:(id)a1;
- (BOOL)shouldBeginWindowDragGesture;
- (void)handleWindowDragGestureRecognizer:(id)a0;

@end
