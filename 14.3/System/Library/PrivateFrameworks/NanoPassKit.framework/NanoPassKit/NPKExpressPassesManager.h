@class NSArray, NSString, NSHashTable;

@interface NPKExpressPassesManager : NSObject <NPKPassesDataSource>

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSArray *currentPasses;
@property (retain, nonatomic) NSArray *currentPaymentPasses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)paymentPasses;
- (void)unregisterObserver:(id)a0;
- (void)reloadPasses;
- (id)passes;
- (void)reloadPassesWithCompletion:(id /* block */)a0;
- (void)enableRemoteUpdates;
- (void)removePass:(id)a0;
- (id)passForUniqueID:(id)a0;
- (BOOL)shouldAllowMovingItemAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)movePassAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)setDefaultPaymentPass:(id)a0;
- (void)suppressRemoteUpdates;
- (void)updateWithExpressPass:(id)a0 siblingExpressPasses:(id)a1;

@end
