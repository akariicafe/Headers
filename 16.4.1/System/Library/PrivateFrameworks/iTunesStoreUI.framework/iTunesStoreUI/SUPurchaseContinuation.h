@class SUPurchaseManager;

@interface SUPurchaseContinuation : SUContinuation

@property (readonly, nonatomic) id purchase;
@property (weak, nonatomic) SUPurchaseManager *purchaseManager;

- (void)cancel;
- (void)dealloc;
- (void)start;
- (id)initWithPurchase:(id)a0;

@end
