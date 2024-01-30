@interface SKProductStorePromotionController : NSObject

+ (id)defaultController;

- (void)_fetchProductsForPromotionOrder:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchStorePromotionVisibilityForProduct:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateStorePromotionVisibility:(long long)a0 forProduct:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchStorePromotionOrderWithCompletionHandler:(id /* block */)a0;
- (void)updateStorePromotionOrder:(id)a0 completionHandler:(id /* block */)a1;

@end
