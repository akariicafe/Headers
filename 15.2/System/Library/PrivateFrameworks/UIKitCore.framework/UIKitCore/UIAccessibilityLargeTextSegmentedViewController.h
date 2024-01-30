@class UISegment, NSArray, UIScrollView, UISegmentedControl, NSMutableArray;

@interface UIAccessibilityLargeTextSegmentedViewController : UIViewController

@property (retain, nonatomic) UISegment *originalSelectedSegment;
@property (retain, nonatomic) NSArray *segments;
@property (retain, nonatomic) UIScrollView *mainScrollView;
@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (retain, nonatomic) NSMutableArray *segmentButtons;

- (void)viewDidLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)buttonPress:(id)a0;
- (void)buttonTouchUp:(id)a0;
- (id)segmentFromSegment:(id)a0;
- (void)_configureSegmentViews;
- (id)initWithSegmentedControl:(id)a0 segments:(id)a1 delegate:(id)a2;
- (void)buttonTouchDown:(id)a0;
- (void)_orientationChanged:(id)a0;

@end
