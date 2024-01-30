@class HMHome, NSSet;

@interface HFDemoModeAccessoryItemProvider : HFItemProvider

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSSet *demoItems;
@property (copy, nonatomic) id /* block */ filter;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHome:(id)a0;
- (id)items;
- (id)invalidationReasons;
- (id)reloadItems;

@end
