@class HMHome, NSMutableSet;

@interface HULinkedApplicationItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *linkedApplicationItems;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;

+ (BOOL)prefersNonBlockingReloads;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;
- (id)_generateItemsFromSoftwareLookupResult:(id)a0;

@end
