@protocol OFUIDismissalViewDelegate;

@interface OFUIDismissalView : UIView {
    BOOL _inPassthroughHitTest;
}

@property (nonatomic) id<OFUIDismissalViewDelegate> dismissalViewDelegate;

- (void)dealloc;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
