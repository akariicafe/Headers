@protocol OFUIDismissalViewDelegate;

@interface OFUIDismissalView : UIView {
    BOOL _inPassthroughHitTest;
}

@property (nonatomic) id<OFUIDismissalViewDelegate> dismissalViewDelegate;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)dealloc;

@end
