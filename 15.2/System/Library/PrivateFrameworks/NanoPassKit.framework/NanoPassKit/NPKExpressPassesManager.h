@class NSArray, NSString, NSHashTable;

@interface NPKExpressPassesManager : NSObject <NPKPassesDataSource>

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSArray *currentPasses;
@property (retain, nonatomic) NSArray *currentPaymentPasses;
@property (retain, nonatomic) NSArray *currentSecureElementPasses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removePass:(id)a0;
- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)unregisterObserver:(id)a0;
- (void)enableRemoteUpdates;
- (id)passes;
- (id)paymentPasses;
- (void)reloadPasses;
- (void)reloadPassesWithCompletion:(id /* block */)a0;
- (id)passForUniqueID:(id)a0;
- (id)secureElementPasses;
- (id)expiredPasses;
- (BOOL)shouldAllowMovingItemAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)movePassAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)unarchivePass:(id)a0;
- (void)setDefaultPaymentPass:(id)a0;
- (void)suppressRemoteUpdates;
- (void)updateWithExpressPass:(id)a0 siblingExpressPasses:(id)a1;

@end
