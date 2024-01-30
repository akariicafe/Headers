@class UIView, UILongPressGestureRecognizer, NSArray, NSString, NSMutableArray, NSLayoutConstraint, DCSinglePixelVerticalLineView, DCSinglePixelHorizontalLineView, UIScrollView;
@protocol ICDocCamFilterViewDelegate;

@interface ICDocCamFilterViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate>

@property (weak, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) DCSinglePixelVerticalLineView *verticalLineView;
@property (weak, nonatomic) DCSinglePixelHorizontalLineView *horizontalLineView;
@property (copy, nonatomic) NSArray *layoutConstraints;
@property (retain, nonatomic) NSLayoutConstraint *scrollViewBottomConstraint;
@property (nonatomic) BOOL transitioning;
@property (retain, nonatomic) NSMutableArray *filterButtons;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (nonatomic) double horizontalOffset;
@property (nonatomic) double bottomOffset;
@property (nonatomic) double bottomContentInset;
@property (weak, nonatomic) id<ICDocCamFilterViewDelegate> filterViewDelegate;
@property (nonatomic) short currentFilterType;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic) NSLayoutConstraint *scrollViewTrailingConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)longPressGesture:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)updateConstraints;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)prepareToAnimateIn:(BOOL)a0;
- (void)initializeFilters;
- (void)updateScrollViewContentSize;
- (void)setUpScrollView;
- (void)centerContent:(BOOL)a0 isPortrait:(BOOL)a1;
- (void)updateConstraintsPad;
- (void)updateConstraintsPhone;
- (void)filterSelected:(id)a0;
- (id)filterButtonFromLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)applyToAll:(short)a0;

@end
