@class HMHome, NSMutableSet;
@protocol HFCharacteristicValueSource;

@interface HFAccessoryItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *accessoryItems;
@property (retain, nonatomic) id<HFCharacteristicValueSource> overrideValueSource;
@property (copy, nonatomic) id /* block */ filter;
@property (retain, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) HMHome *home;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;

@end
