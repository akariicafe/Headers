@class HMHome, NSMutableSet;

@interface HFProgrammableSwitchItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *programmableSwitchAccessoryItems;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHome:(id)a0;
- (id)items;
- (id)invalidationReasons;
- (id)reloadItems;

@end
