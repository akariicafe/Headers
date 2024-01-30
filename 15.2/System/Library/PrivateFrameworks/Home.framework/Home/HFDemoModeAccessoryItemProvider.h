@class HMHome, NSSet;

@interface HFDemoModeAccessoryItemProvider : HFItemProvider

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSSet *demoItems;
@property (copy, nonatomic) id /* block */ filter;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;

@end
