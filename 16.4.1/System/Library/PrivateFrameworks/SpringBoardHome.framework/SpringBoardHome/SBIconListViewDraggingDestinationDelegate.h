@class NSString, NSMapTable, NSMutableSet, UIDropInteraction, SBIconListView;
@protocol SBIconListViewDraggingPolicyHandling;

@interface SBIconListViewDraggingDestinationDelegate : NSObject <SBFSpringLoadedInteractionBehaviorDelegate, SBFSpringLoadedInteractionEffectDelegate, BSDescriptionProviding, UIDropInteractionDelegate> {
    NSMapTable *_dragObservers;
    NSMutableSet *_activeDropSessionIdentifiers;
    NSMutableSet *_dropSessionIdentifiersWaitingForConcludeDrop;
}

@property (readonly, nonatomic) UIDropInteraction *dropInteraction;
@property (nonatomic) unsigned long long currentDragType;
@property (retain, nonatomic) id<SBIconListViewDraggingPolicyHandling> currentPolicyHandler;
@property (nonatomic) unsigned long long currentSpringLoadedDragType;
@property (retain, nonatomic) id<SBIconListViewDraggingPolicyHandling> springLoadingPolicyHandler;
@property (nonatomic, getter=isWaitingForConcludeDrag) BOOL waitingForConcludeDrag;
@property (readonly, weak, nonatomic) SBIconListView *iconListView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dropInteraction:(id)a0 concludeDrop:(id)a1;
- (void)addDragObserver:(id)a0 forDropSession:(id)a1;
- (void)dropInteraction:(id)a0 item:(id)a1 willAnimateDropWithAnimator:(id)a2;
- (id)dropInteraction:(id)a0 previewForDroppingItem:(id)a1 withDefault:(id)a2;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void)springLoadedInteractionDidFinish;
- (void)markDropSessionAsWaitingForConcludeDrop:(id)a0;
- (id)targetItemForSpringLoadingInteractionInView:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 forDropSession:(id)a2;
- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (id)succinctDescriptionBuilder;
- (id)targetViewForSpringLoadingEffectForView:(id)a0;
- (void)unmarkDropSessionAsWaitingForConcludeDrop:(id)a0;
- (void)_handleSpringloadAndComplete:(id)a0;
- (BOOL)updateSpringLoadedPolicyHandlerForDropSession:(id)a0;
- (id)uniqueIdentifierForDropSession:(id)a0;
- (void)_resetSpringLoadingPolicyHandler;
- (BOOL)updateCurrentPolicyHandlerForDropSession:(id)a0;
- (id)_dropInteraction:(id)a0 customSpringAnimationBehaviorForDroppingItem:(id)a1;
- (id)initWithIconListView:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (unsigned long long)dragTypeForDropSession:(id)a0;
- (void)enumerateDragObserversForDropSession:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)isDropSessionWaitingForConcludeDrop:(id)a0;
- (void)removeAllDragObserversForDropSession:(id)a0;
- (void).cxx_destruct;

@end
