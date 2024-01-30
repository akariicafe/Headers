@class CKContainer, NSString;
@protocol BCSQueryOperationFactoryProtocol, BCSCloudKitQueryProviding, BCSICloudServerEnvironmentProtocol, BCSCloudKitDatabaseProtocol, BCSQueryOperationProtocol, BCSMetricFactoryProtocol, BCSBloomFilterExtractorProtocol, BCSCoalesceHelperProtocol, BCSOperationGroupFactoryProtocol;

@interface BCSRemoteFetchCloudKit : NSObject <BSDescriptionProviding, BCSConfigRemoteFetching, BCSShardRemoteFetching, BCSBloomFilterAndConfigRemoteFetching, BCSItemRemoteFetching, BCSShardItemInstantiating> {
    id<BCSQueryOperationProtocol> _queryOperation;
}

@property (readonly, retain, nonatomic) id<BCSCloudKitDatabaseProtocol> database;
@property (readonly, retain, nonatomic) id<BCSCloudKitQueryProviding> queryProvider;
@property (readonly, retain, nonatomic) id<BCSQueryOperationFactoryProtocol> queryOperationFactory;
@property (readonly, retain, nonatomic) CKContainer *databaseContainer;
@property (readonly, retain, nonatomic) id<BCSICloudServerEnvironmentProtocol> environment;
@property (readonly, retain, nonatomic) id<BCSCoalesceHelperProtocol> coalesceHelper;
@property (readonly, retain, nonatomic) id<BCSBloomFilterExtractorProtocol> bloomFilterExtractor;
@property (readonly, retain, nonatomic) id<BCSOperationGroupFactoryProtocol> operationGroupFactory;
@property (readonly, retain, nonatomic) id<BCSMetricFactoryProtocol> metricFactory;
@property (readonly, nonatomic) long long supportedType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)fetchConfigItemWithType:(long long)a0 clientBundleID:(id)a1 completion:(id /* block */)a2;
- (id)shardItemFromURL:(id)a0;
- (void)fetchBloomFilterAndConfigItemWithType:(long long)a0 clientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchItemsWithBucketStartIndex:(long long)a0 endIndex:(long long)a1 type:(long long)a2 forClientBundleID:(id)a3 completion:(id /* block */)a4;
- (void)fetchConfigItemWithType:(long long)a0 clientBundleID:(id)a1 xpcActivity:(id)a2 completion:(id /* block */)a3;
- (void)fetchShardMatching:(id)a0 clientBundleID:(id)a1 completion:(id /* block */)a2;
- (id)initWithEnvironment:(id)a0 database:(id)a1 databaseContainer:(id)a2 queryProvider:(id)a3 queryOperationFactory:(id)a4 coalesceHelper:(id)a5 bloomFilterExtractor:(id)a6 operationGroupFactory:(id)a7 metricFactory:(id)a8;
- (id)_additionalHTTPHeadersForConfigFetchWithType:(long long)a0;
- (id)_queryOperationForQuery:(id)a0 clientBundleID:(id)a1 xpcActivity:(id)a2 requestSpecificAdditionalHTTPHeaders:(id)a3 type:(long long)a4 singleFetchCompletion:(id /* block */)a5;
- (id)_additionalHTTPHeadersForShardFetchWithType:(long long)a0;
- (void)fetchBloomFilterAndConfigItemWithType:(long long)a0 clientBundleID:(id)a1 xpcActivity:(id)a2 completion:(id /* block */)a3;
- (id)_additionalHTTPHeadersForConfigAndShardFetchWithType:(long long)a0;
- (id)_additionalHTTPHeadersForItemFetchWithType:(long long)a0;
- (id)_itemsFromCloudKitResults:(id)a0 forType:(long long)a1;
- (id)_queryOperationForQuery:(id)a0 clientBundleID:(id)a1 xpcActivity:(id)a2 requestSpecificAdditionalHTTPHeaders:(id)a3 type:(long long)a4 multipleFetchCompletion:(id /* block */)a5;
- (void)_configureOperationForQuery:(id)a0 clientBundleID:(id)a1 xpcActivity:(id)a2 requestSpecificAdditionalHTTPHeaders:(id)a3 type:(long long)a4;
- (id)_queryOperationForQuery:(id)a0 configurationBlock:(id /* block */)a1 singleFetchCompletion:(id /* block */)a2;
- (id)_queryOperationForQuery:(id)a0 configurationBlock:(id /* block */)a1 multipleFetchCompletion:(id /* block */)a2;
- (id)initWithEnvironment:(id)a0 database:(id)a1 databaseContainer:(id)a2 queryOperationFactory:(id)a3 coalesceHelper:(id)a4 bloomFilterExtractor:(id)a5 operationGroupFactory:(id)a6 metricFactory:(id)a7;

@end
