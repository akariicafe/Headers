@class NSArray, NSMutableSet, HMHome;
@protocol HFCharacteristicValueSource;

@interface HFServiceItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *serviceItems;
@property (retain, nonatomic) NSArray *serviceTypes;
@property (retain, nonatomic) id<HFCharacteristicValueSource> overrideValueSource;
@property (readonly, nonatomic) HMHome *home;
@property (copy, nonatomic) id /* block */ filter;
@property (copy, nonatomic) id /* block */ sourceServiceGenerator;
@property (retain, nonatomic) id<HFCharacteristicValueSource> valueSource;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHome:(id)a0;
- (id)items;
- (id)initWithHome:(id)a0 serviceTypes:(id)a1;
- (id)invalidationReasons;
- (id)reloadItems;

@end
