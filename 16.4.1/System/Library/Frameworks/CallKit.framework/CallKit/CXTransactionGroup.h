@class NSArray, NSMutableDictionary, NSMutableArray;

@interface CXTransactionGroup : NSObject

@property (readonly, nonatomic) NSMutableDictionary *callSourceIdentifierToTransaction;
@property (readonly, nonatomic) NSMutableArray *mutableCallSources;
@property (readonly, nonatomic) NSMutableDictionary *providerSourceIdentifierToTransaction;
@property (readonly, nonatomic) NSMutableArray *mutableProviderSources;
@property (readonly, nonatomic) NSMutableArray *mutableServiceClients;
@property (readonly, nonatomic) NSMutableDictionary *serviceClientIdentifierToTransaction;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, copy, nonatomic) NSArray *callSources;
@property (readonly, copy, nonatomic) NSArray *allActions;
@property (readonly, copy, nonatomic) NSArray *transactions;
@property (readonly, copy, nonatomic) NSArray *providerSources;
@property (readonly, nonatomic, getter=isServiceClientGroupComplete) BOOL serviceClientGroupComplete;
@property (readonly, copy, nonatomic) NSArray *serviceClientActions;
@property (readonly, copy, nonatomic) NSArray *serviceClientTransactions;
@property (readonly, copy, nonatomic) NSArray *serviceClients;

- (void)addAction:(id)a0 forProviderSource:(id)a1;
- (void)addAction:(id)a0 forServiceClient:(id)a1;
- (id)transactionForProviderSource:(id)a0;
- (id)transactionForServiceClient:(id)a0;
- (void)addAction:(id)a0 forCallSource:(id)a1;
- (id)init;
- (id)description;
- (id)transactionForCallSource:(id)a0;
- (void).cxx_destruct;

@end
