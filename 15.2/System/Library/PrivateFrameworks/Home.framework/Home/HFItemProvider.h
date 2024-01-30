@class NSSet;

@interface HFItemProvider : NSObject <NSCopying>

@property (readonly, nonatomic) NSSet *items;
@property (retain, nonatomic) NSSet *clientInvalidationReasons;

+ (BOOL)prefersNonBlockingReloads;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)reloadItemsWithHomeKitObjects:(id)a0 filter:(id /* block */)a1 itemMap:(id /* block */)a2;
- (id)invalidationReasons;
- (id)reloadItemsWithObjects:(id)a0 keyAdaptor:(id /* block */)a1 itemAdaptor:(id /* block */)a2 filter:(id /* block */)a3 itemMap:(id /* block */)a4;

@end
