@class NSSet, HMHome;

@interface HULinkedApplicationItemProvider : HFItemProvider

@property (retain, nonatomic) NSSet *linkedApplicationItems;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;

+ (BOOL)prefersNonBlockingReloads;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)_generateItemsFromSoftwareLookupResult:(id)a0;
- (id)invalidationReasons;

@end
