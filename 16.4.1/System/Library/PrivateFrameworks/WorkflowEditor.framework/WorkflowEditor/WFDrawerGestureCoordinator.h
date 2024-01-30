@class NSString, WFDrawerVelocityFilter, UIScrollView, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol WFDrawerGestureCoordinatorDelegate;

@interface WFDrawerGestureCoordinator : NSObject <WFDrawerDismissalHelperDelegate>

@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (readonly, nonatomic) WFDrawerVelocityFilter *heightVelocityFilter;
@property (readonly, nonatomic) WFDrawerVelocityFilter *heightAccelerationFilter;
@property (nonatomic) unsigned long long tapGestureIgnoringCount;
@property (nonatomic) struct CGPoint { double x; double y; } previousPanTranslation;
@property (nonatomic) double minimumDrawerHeight;
@property (nonatomic) double maximumDrawerHeight;
@property (nonatomic) double topRubberBandRange;
@property (nonatomic) double bottomRubberBandRange;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) struct CGPoint { double x; double y; } initialContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } unmodifiedInitialContentOffset;
@property (nonatomic) BOOL correctingContentOffset;
@property (readonly, weak, nonatomic) id<WFDrawerGestureCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)initWithDelegate:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void).cxx_destruct;
- (void)handlePanGesture:(id)a0;
- (double)applyRubberBandToValue:(double)a0 withRange:(double)a1;
- (double)heightForRubberBandHeight:(double)a0;
- (double)rubberBandHeightForHeight:(double)a0;
- (double)unapplyRubberBandToValue:(double)a0 withRange:(double)a1;
- (void)handleTapGesture:(id)a0;
- (double)containerHeight;
- (void)beginDragging;
- (void)beginIgnoringTapGestures;
- (double)clampedDrawerHeight:(double)a0;
- (double)dismissalRectTopEdgeForCardDismissalHelper:(id)a0 coordinateSpace:(id)a1;
- (id)dragGestureTrackerForCardDismissalHelper:(id)a0;
- (void)dragTranslatedWithVerticalDelta:(double)a0;
- (void)drawerDismissalHelper:(id)a0 requestedDismissalWithVelocity:(double)a1;
- (double)drawerHeight;
- (void)endDraggingWithAnimation:(id)a0;
- (void)endDraggingWithVerticalVelocity:(double)a0 animation:(id)a1;
- (void)endIgnoringTapGestures;
- (void)updateTapGestureRecognizer;

@end
