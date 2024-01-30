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
- (void)unregisterObserver:(id)a0;
- (id)init;
- (id)passes;
- (void).cxx_destruct;
- (void)enableRemoteUpdates;
- (id)paymentPasses;
- (void)reloadPasses;
- (void)reloadPassesWithCompletion:(id /* block */)a0;
- (id)expiredPasses;
- (void)movePassAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (id)passForUniqueID:(id)a0;
- (id)secureElementPasses;
- (void)setDefaultPaymentPass:(id)a0;
- (BOOL)shouldAllowMovingItemAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)suppressRemoteUpdates;
- (void)unarchivePass:(id)a0;
- (void)updateWithExpressPass:(id)a0 siblingExpressPasses:(id)a1;

@end
