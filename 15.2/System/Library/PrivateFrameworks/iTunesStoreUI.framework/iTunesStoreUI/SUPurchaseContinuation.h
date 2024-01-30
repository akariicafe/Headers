@class SUPurchaseManager;

@interface SUPurchaseContinuation : SUContinuation

@property (readonly, nonatomic) id purchase;
@property (weak, nonatomic) SUPurchaseManager *purchaseManager;

- (id)initWithPurchase:(id)a0;
- (void)start;
- (void)dealloc;
- (void)cancel;

@end
