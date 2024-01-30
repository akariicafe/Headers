@class HMHome, NSMutableSet;

@interface HFTargetControlItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *remoteControlAccessoryItems;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)invalidationReasons;

@end
