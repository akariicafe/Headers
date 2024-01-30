@class HMHome, NSMutableSet;

@interface HULinkedApplicationItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *linkedApplicationItems;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;

+ (BOOL)prefersNonBlockingReloads;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHome:(id)a0;
- (id)items;
- (id)invalidationReasons;
- (id)reloadItems;
- (id)_generateItemsFromSoftwareLookupResult:(id)a0;

@end
