@class NSMutableSet, HFAccessoryBrowsingManager;

@interface HFDiscoveredAccessoryItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *discoveredAccessoryItems;
@property (readonly, nonatomic) HFAccessoryBrowsingManager *accessoryBrowsingManager;
@property (copy, nonatomic) id /* block */ filter;

- (void).cxx_destruct;
- (id)init;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;
- (id)initWithAccessoryBrowsingManager:(id)a0;

@end
