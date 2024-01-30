@class NSMutableSet, HFAccessoryBrowsingManager;

@interface HFDiscoveredAccessoryItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *discoveredAccessoryItems;
@property (readonly, nonatomic) HFAccessoryBrowsingManager *accessoryBrowsingManager;
@property (copy, nonatomic) id /* block */ filter;

- (id)init;
- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)initWithAccessoryBrowsingManager:(id)a0;

@end
