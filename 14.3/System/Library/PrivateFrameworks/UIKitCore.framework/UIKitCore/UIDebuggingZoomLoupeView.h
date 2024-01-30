@protocol UIDebuggingZoomDelegate;

@interface UIDebuggingZoomLoupeView : UIView

@property (nonatomic) struct CGPoint { double x; double y; } currentlyInspectedPoint;
@property (weak, nonatomic) id<UIDebuggingZoomDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
