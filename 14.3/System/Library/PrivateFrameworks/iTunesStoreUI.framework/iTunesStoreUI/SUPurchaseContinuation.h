@class SUPurchaseManager;

@interface SUPurchaseContinuation : SUContinuation

@property (readonly, nonatomic) id purchase;
@property (weak, nonatomic) SUPurchaseManager *purchaseManager;

- (void)cancel;
- (void)dealloc;
- (id)initWithPurchase:(id)a0;
- (void)start;

@end
