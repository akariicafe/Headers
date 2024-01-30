@class HMHome, NSMutableSet;

@interface HFBridgeItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *accessoryItems;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;

@end
