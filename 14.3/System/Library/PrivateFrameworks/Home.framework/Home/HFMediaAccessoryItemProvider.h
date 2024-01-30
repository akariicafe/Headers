@class HMHome, NSMutableSet;
@protocol HFCharacteristicValueSource;

@interface HFMediaAccessoryItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *mediaAccessoryItems;
@property (retain, nonatomic) id<HFCharacteristicValueSource> overrideValueSource;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) BOOL includeMediaSystems;
@property (retain, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) HMHome *home;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHome:(id)a0;
- (id)items;
- (id)invalidationReasons;
- (id)reloadItems;
- (id)initWithHome:(id)a0 includeMediaSystems:(BOOL)a1;

@end
