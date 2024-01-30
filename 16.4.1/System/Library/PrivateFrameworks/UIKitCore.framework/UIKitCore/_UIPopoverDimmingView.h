@class _UIPassthroughScrollInteraction, NSString, UIView;
@protocol _UIPopoverDimmingViewDelegate;

@interface _UIPopoverDimmingView : UIDimmingView <_UIPassthroughScrollInteractionDelegate> {
    BOOL _lastHitTestWasPassedThrough;
}

@property (readonly, nonatomic) _UIPassthroughScrollInteraction *_passthroughScrollInteraction;
@property (weak, nonatomic) id<_UIPopoverDimmingViewDelegate> delegate;
@property (weak, nonatomic) UIView *transitionContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_sendDelegateDimmingViewWasTapped;
- (void)didMoveToWindow;
- (BOOL)passthroughScrollInteraction:(id)a0 shouldInteractAtLocation:(struct CGPoint { double x0; double x1; })a1 withEvent:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToWindow:(id)a0;
- (BOOL)passthroughScrollInteractionDidRecognize:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_delegateAllowsInteraction;
- (void).cxx_destruct;

@end
