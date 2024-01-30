@interface ASKFamilyPurchases : NSObject

@property (class, readonly) ASKFamilyPurchases *shared;

- (id)init;
- (void)reloadDataWithBag:(id)a0 completion:(id /* block */)a1;

@end
