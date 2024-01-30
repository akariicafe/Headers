@class NSString;
@protocol HKOverlayRoomViewControllerIntegratedContextDelegate;

@interface HKOverlayRoomViewControllerQuantityContext : HKOverlayRoomViewControllerIntegratedContext

@property (retain, nonatomic) NSString *quantityTypeIdentifier;
@property (weak, nonatomic) id<HKOverlayRoomViewControllerIntegratedContextDelegate> optionalDelegate;
@property (nonatomic) long long options;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)valueString:(id)a0 applicationItems:(id)a1 representativeDisplayType:(id)a2;
- (id)unitString:(id)a0 applicationItems:(id)a1 representativeDisplayType:(id)a2;
- (id)representativeDisplayType;
- (id)buildContextItemWithValue:(id)a0 unit:(id)a1 valueContext:(id)a2 forTimeScope:(long long)a3;
- (id)buildOverlayDisplayTypeForTimeScope:(long long)a0;
- (void)fetchCachedDataForTimeScope:(long long)a0 dateInterval:(id)a1 completion:(id /* block */)a2;
- (id)valueContextString:(id)a0 applicationItems:(id)a1 representativeDisplayType:(id)a2;
- (id)initWithQuantityIdentifier:(id)a0 overlayChartController:(id)a1 applicationItems:(id)a2 optionalDelegate:(id)a3 seriesOptions:(long long)a4 mode:(long long)a5;

@end
