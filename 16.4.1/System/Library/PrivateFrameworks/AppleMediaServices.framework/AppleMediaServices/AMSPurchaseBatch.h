@class AMSLazyPromise, NSMutableDictionary, NSLock, NSMutableArray;

@interface AMSPurchaseBatch : NSObject

@property (nonatomic) BOOL isComplete;
@property (retain, nonatomic) NSLock *lock;
@property (readonly, nonatomic) AMSLazyPromise *promise;
@property (readonly, nonatomic) NSMutableArray *purchases;
@property (readonly, nonatomic) NSMutableDictionary *purchaseMap;
@property (readonly, nonatomic) NSMutableArray *results;

- (void).cxx_destruct;
- (BOOL)finishPurchase:(id)a0 withError:(id)a1;
- (BOOL)finishPurchase:(id)a0 withResult:(id)a1;
- (id)initWithPurchases:(id)a0 weakPromise:(id)a1;
- (id)nextPurchase;
- (id)purchaseForPurchaseId:(id)a0;

@end
