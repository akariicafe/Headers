@class NSString, NSObject;
@protocol OS_dispatch_queue, BCSMetricFactoryProtocol;

@interface BCSQueryChopper : NSObject <BCSQueryChopperProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (readonly, nonatomic) id<BCSMetricFactoryProtocol> metricFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMetricFactory:(id)a0;
- (void)queryChopperDelegate:(id)a0 fetchLinkItemModelWithURL:(id)a1 isBloomFilterCached:(BOOL)a2 forClientBundleID:(id)a3 metric:(id)a4 completion:(id /* block */)a5;
- (void)queryChopperDelegate:(id)a0 isBusinessRegisteredForURL:(id)a1 isBloomFilterCached:(BOOL)a2 forClientBundleID:(id)a3 metric:(id)a4 completion:(id /* block */)a5;
- (id)_chopItemIdentifiersToFetchFromURL:(id)a0 isBloomFilterCached:(BOOL)a1;
- (long long)_indexOfItemIdentifierInfo:(id)a0 inItemIdentifierInfos:(id)a1;
- (BOOL)_allHigherPriorityRemoteFetchesHaveCompletedWithLinkItemIdentifier:(id)a0 itemsFound:(id)a1 itemIdentifiersToFetch:(id)a2;
- (void)_returnHighestPriorityLinkItemWithItemIdentifiersToFetch:(id)a0 fetchedItems:(id)a1 fetchedErrors:(id)a2 metric:(id)a3 completion:(id /* block */)a4;
- (BOOL)shouldChopURL:(id)a0;
- (id)_removeLinkItemDuplicatesInOrderFromArray:(id)a0;

@end
