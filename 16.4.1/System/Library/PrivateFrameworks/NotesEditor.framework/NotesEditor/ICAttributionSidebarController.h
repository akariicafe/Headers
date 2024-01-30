@class ICAttributionSidebarView, ICTextViewController, TTTextEditFilter, ICNAEventReporter, NSDate, NSNumber, UIPanGestureRecognizer;

@interface ICAttributionSidebarController : NSObject

@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) double attributionSidebarGestureBaselineX;
@property (retain, nonatomic) NSNumber *attributionSidebarGestureBaselineContentOffsetY;
@property (nonatomic) double attributionSidebarGestureAcceptedDistanceX;
@property (nonatomic) double attributionSidebarGestureIgnoredDistanceX;
@property (nonatomic) BOOL attributionSidebarGestureHasBegunToOpen;
@property (retain, nonatomic) NSDate *attributionSidebarGestureStartTime;
@property (readonly, nonatomic) ICNAEventReporter *eventReporter;
@property (retain, nonatomic) ICTextViewController *textViewController;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) long long attributionSidebarVisibility;
@property (readonly, nonatomic) ICAttributionSidebarView *attributionSidebarView;
@property (copy, nonatomic) TTTextEditFilter *filter;

+ (id)keyPathsForValuesAffectingAttributionSidebarVisibility;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (void)handlePanGesture:(id)a0;
- (void)cancelActiveGestures;
- (void)hideSidebarAnimated:(BOOL)a0;
- (void)hideSidebarAnimated:(BOOL)a0 contextPath:(long long)a1;
- (void)noteDidUpdateShare:(id)a0;
- (void)setFilter:(id)a0 animated:(BOOL)a1;
- (void)showSidebarAnimated:(BOOL)a0;

@end
