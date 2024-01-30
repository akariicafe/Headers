@class CALayer, NSString;

@interface PXUISubjectTrackingView : PXSubjectTrackingView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) CALayer *modulationFilterLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAddSubview:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)viewTapped:(id)a0;
- (id)initWithMediaView:(id)a0 cineController:(id)a1;
- (void)setUpModulationLayer;
- (void)viewDoubleTapped:(id)a0;
- (void)viewLongPressed:(id)a0;

@end
