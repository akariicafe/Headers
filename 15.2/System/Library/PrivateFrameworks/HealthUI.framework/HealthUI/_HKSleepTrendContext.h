@class HKDisplayType;
@protocol _HKContextChangeDelegate;

@interface _HKSleepTrendContext : HKOverlayRoomTrendContext

@property (readonly, nonatomic) HKDisplayType *baseDisplayType;
@property (weak, nonatomic) id<_HKContextChangeDelegate> contextChangeDelegate;

- (void).cxx_destruct;
- (void)overlayStateWillChange:(BOOL)a0 contextItem:(id)a1 chartController:(id)a2;
- (id)baseDisplayTypeForOverlay:(long long)a0;
- (BOOL)unselectedContextShouldUseContextBaseType;
- (id)initWithBaseDisplayType:(id)a0 trendModel:(id)a1 overlayChartController:(id)a2 applicationItems:(id)a3 overlayMode:(long long)a4 contextChangeDelegate:(id)a5;

@end
