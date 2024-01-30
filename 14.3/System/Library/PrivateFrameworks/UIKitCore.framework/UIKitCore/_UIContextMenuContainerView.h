@class NSString, _UIPassthroughScrollInteraction, UIView;

@interface _UIContextMenuContainerView : UIView <_UIPassthroughScrollInteractionDelegate> {
    BOOL _lastHitTestWasPassedThrough;
    _UIPassthroughScrollInteraction *_passthroughInteraction;
}

@property (nonatomic) BOOL dismissesInstantly;
@property (weak, nonatomic) UIView *contentWrapperView;
@property (copy, nonatomic) id /* block */ dismissalHandler;
@property (copy, nonatomic) id /* block */ subtreeTraitPropagationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)passthroughScrollInteraction:(id)a0 shouldInteractAtLocation:(struct CGPoint { double x0; double x1; })a1 withEvent:(id)a2;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription { id x0; id x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } *)a0;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_attemptDismiss:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)passthroughScrollInteractionDidRecognize:(id)a0;

@end
