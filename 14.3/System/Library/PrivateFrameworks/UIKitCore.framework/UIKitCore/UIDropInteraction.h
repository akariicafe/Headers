@class UIPasteConfiguration, NSString, NSMutableSet, UIView, UIDropInteractionContextImpl, NSMapTable;
@protocol UIDropInteractionDelegate, UIDropInteractionEffect;

@interface UIDropInteraction : NSObject <UIDragGestureRecognizerDelegate, UIInteraction_Internal, UIDragInteraction, _UIDragSetDownAnimationTarget, UIInteraction> {
    NSMutableSet *_activeDragGestureRecognizers;
    NSMapTable *_enteredDropSessionByDraggingSession;
    unsigned long long _potentialDragOperation;
}

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) UIDropInteractionContextImpl *context;
@property (readonly, copy, nonatomic, getter=_pasteConfiguration) UIPasteConfiguration *pasteConfiguration;
@property (retain, nonatomic) id<UIDropInteractionEffect> interactionEffect;
@property (nonatomic, getter=_wantsDefaultVisualBehavior, setter=_setWantsDefaultVisualBehavior:) BOOL wantsDefaultVisualBehavior;
@property (readonly, weak, nonatomic) id<UIDropInteractionDelegate> delegate;
@property (nonatomic) BOOL allowsSimultaneousDropSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_gestureRecognizerFailed:(id)a0;
- (void)willMoveToView:(id)a0;
- (void)didMoveToView:(id)a0;
- (void).cxx_destruct;
- (BOOL)_gestureRecognizer:(id)a0 shouldReceiveDragEvent:(id)a1;
- (void)_sendSessionDidEnd:(id)a0;
- (id)_setDownAnimation:(id)a0 prepareForSetDownOfDragItem:(id)a1 visibleDroppedItem:(id)a2;
- (id)_windowForSetDownOfDragItem:(id)a0;
- (id)_dynamicGestureRecognizersForEvent:(id)a0;
- (void)_dropSessionEntered:(id)a0 withSessionDestination:(id)a1;
- (id)_setDownAnimation:(id)a0 customSpringAnimationBehaviorForSetDownOfDragItem:(id)a1;
- (BOOL)isActive;
- (unsigned long long)_validateDragOperation:(unsigned long long)a0 forSelector:(SEL)a1 delegate:(id)a2 dropSession:(id)a3 onSession:(id)a4 forbidden:(BOOL *)a5;
- (BOOL)_setDownAnimation:(id)a0 shouldDelaySetDownOfDragItem:(id)a1 completion:(id /* block */)a2;
- (BOOL)_canHandleDragEvent:(id)a0;
- (BOOL)_allowsSimultaneousDragWithEvent:(id)a0;
- (id)initWithDelegate:(id)a0;
- (unsigned long long)_setLastDragOperation:(unsigned long long)a0 forbidden:(BOOL)a1 precise:(BOOL)a2 prefersFullSizePreview:(BOOL)a3 preferredBadgeStyle:(long long)a4 onSession:(id)a5;
- (void)_dragDestinationGestureStateChanged:(id)a0;
- (void)_setDownAnimation:(id)a0 willAnimateSetDownOfDragItem:(id)a1 withAnimator:(id)a2;
- (id)_initWithPasteConfiguration:(id)a0;
- (void)_prepareItemsInSessionForDrop:(id)a0;

@end
