@class NSString, HKAnnotationDisplayType, HKInteractiveChartViewController;

@interface HKAnnotationOverlayManager : NSObject <HKInteractiveChartViewObserver>

@property (readonly, nonatomic) HKInteractiveChartViewController *chartViewController;
@property (retain, nonatomic) HKAnnotationDisplayType *currentOverlayDisplayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)configureDisplayTypes:(id)a0 timeScope:(long long)a1 stackOffset:(long long)a2;
- (void)removeAnnotationOverlay;
- (id)initWithInteractiveChart:(id)a0;
- (void)installAnnotationOverlayForRange:(id)a0 trendData:(id)a1;

@end
