@class AMSLazyPromise, NSMutableDictionary, NSLock, NSMutableArray;

@interface AMSPurchaseBatch : NSObject

@property (nonatomic) BOOL isComplete;
@property (retain, nonatomic) NSLock *lock;
@property (readonly, nonatomic) AMSLazyPromise *promise;
@property (readonly, nonatomic) NSMutableArray *purchases;
@property (readonly, nonatomic) NSMutableDictionary *purchaseMap;
@property (readonly, nonatomic) NSMutableArray *results;

- (void).cxx_destruct;
- (id)initWithPurchases:(id)a0 weakPromise:(id)a1;
- (id)purchaseForPurchaseId:(id)a0;
- (BOOL)finishPurchase:(id)a0 withError:(id)a1;
- (BOOL)finishPurchase:(id)a0 withResult:(id)a1;
- (id)nextPurchase;

@end
