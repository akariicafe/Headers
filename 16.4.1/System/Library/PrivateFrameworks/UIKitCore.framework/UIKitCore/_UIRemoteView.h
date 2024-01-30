@class _UIHostedWindowHostingHandle;

@interface _UIRemoteView : _UILayerHostView

@property (copy, nonatomic) id /* block */ tintColorDidChangeHandler;
@property (nonatomic, setter=_setInheritsSecurity:) BOOL _inheritsSecurity;
@property (retain, nonatomic) _UIHostedWindowHostingHandle *hostedWindowHostingHandle;

+ (BOOL)_requiresWindowTouches;
+ (id)viewWithHostedWindowHostingHandle:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pid:(int)a1 contextID:(unsigned int)a2;
- (void)applyTransformUndoingRemoteRootLayerTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 windowServerHitTestWindow:(id)a2;
- (void)tintColorDidChange;
- (void).cxx_destruct;

@end
