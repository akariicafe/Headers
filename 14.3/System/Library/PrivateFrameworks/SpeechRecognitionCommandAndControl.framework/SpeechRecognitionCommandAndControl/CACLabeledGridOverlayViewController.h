@class CACLabeledGridOverlayView;

@interface CACLabeledGridOverlayViewController : UIViewController <CACViewController>

@property (retain, nonatomic) CACLabeledGridOverlayView *gridOverlayView;
@property (nonatomic) BOOL showsNumbersInTopLeft;
@property (readonly, nonatomic) BOOL isSmallEnoughForZooming;
@property (nonatomic) BOOL showsElementsAsClickable;
@property (readonly, nonatomic) long long zOrder;
@property (readonly, nonatomic) BOOL isOverlay;

- (void)show;
- (void).cxx_destruct;
- (void)loadView;
- (void)hide;
- (BOOL)_canShowWhileLocked;
- (void)setLabeledElements:(id)a0;
- (void)zoomOverRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
