@class HMHome, HMRoom;
@protocol HFCharacteristicValueSource;

@interface HFAccessoryCategoryStatusItemProvider : HFStaticItemProvider

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMRoom *room;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;

+ (id)_categoryStatusItemClasses;
+ (id)categorySortOrder;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0 room:(id)a1;
- (id)initWithHome:(id)a0 room:(id)a1 overrideValueSource:(id)a2;
- (id)_buildStatusItemWithClass:(Class)a0 home:(id)a1 room:(id)a2 valueSource:(id)a3;
- (void)_buildStatusItemsForGroupedStatusItem:(id)a0;
- (id)_createStatusItemsForHome:(id)a0 room:(id)a1 valueSource:(id)a2;

@end
