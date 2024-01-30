@class NSUUID, NSString, HKTaskServerProxyProvider;

@interface HKSharedSummaryTransactionBuilder : NSObject <_HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly, copy, nonatomic) NSUUID *transactionUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverInterface;
+ (id)clientInterface;

- (id)initWithHealthStore:(id)a0;
- (void)reuseSummariesWithPackage:(id)a0 names:(id)a1 completion:(id /* block */)a2;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)discardWithCompletion:(id /* block */)a0;
- (void)removeSummariesWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)commitWithCompletion:(id /* block */)a0;
- (void)addSummaries:(id)a0 completion:(id /* block */)a1;
- (void)reuseAllSummariesWithPackage:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (id)initWithHealthStore:(id)a0 transactionUUID:(id)a1;
- (void)commitAsUrgent:(BOOL)a0 completion:(id /* block */)a1;
- (void)allAddedSummariesWithPackage:(id)a0 resultsHandler:(id /* block */)a1;
- (void)removeAllSummariesWithPackage:(id)a0 completion:(id /* block */)a1;
- (id)exportedInterface;
- (void)addMetadata:(id)a0 completion:(id /* block */)a1;
- (void)addedSummariesWithPackage:(id)a0 names:(id)a1 resultsHandler:(id /* block */)a2;
- (void)removeSummariesWithPackage:(id)a0 names:(id)a1 completion:(id /* block */)a2;
- (void)reuseSummariesWithUUIDs:(id)a0 completion:(id /* block */)a1;

@end
