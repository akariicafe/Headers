@protocol _PKAllowDrawingWhilePresentingPopoverViewDelegate;

@interface _PKAllowDrawingWhilePresentingPopoverView : UIView

@property (nonatomic) BOOL isHitTesting;
@property (weak, nonatomic) id<_PKAllowDrawingWhilePresentingPopoverViewDelegate> delegate;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)_rootAncestorViewOfDimmmingView:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
