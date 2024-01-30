@protocol BCSCloudServerBodyProvider, BCSCloudServerRouteProvider;

@interface BCSCloudServerRequestHelper : NSObject

@property (retain, nonatomic) id<BCSCloudServerRouteProvider> cloudServerRouteProvider;
@property (retain, nonatomic) id<BCSCloudServerBodyProvider> cloudServerBodyProvider;

- (void).cxx_destruct;
- (id)businessItemRequestWithBizID:(id)a0 timeout:(double)a1;
- (id)itemRequestWithBucketStartIndex:(long long)a0 endIndex:(long long)a1 type:(long long)a2 timeout:(double)a3;
- (id)initWithRouteProvider:(unsigned long long)a0 bodyProvider:(unsigned long long)a1;
- (id)baseBusinessItemJSONPostRequestWithTimeout:(double)a0 cloudServerRequestType:(long long)a1 itemType:(long long)a2;
- (void)_addEdgeCachingToRequest:(id)a0 requestType:(id)a1 itemType:(long long)a2 requestIdentifier:(id)a3;
- (id)_edgeCacheItemRequestTypeForType:(long long)a0;
- (id)_itemRecordTypeForType:(long long)a0;
- (id)_configRecordTypeForType:(long long)a0;
- (id)_edgeCacheBloomFilterRequestTypeForType:(long long)a0;
- (id)_bloomFilterRecordTypeForType:(long long)a0;
- (BOOL)_skipEdgeCachingWithType:(long long)a0;
- (id)configItemRequestWithType:(long long)a0 timeout:(double)a1;
- (id)shardRequestForShardIdentifier:(id)a0 timeout:(double)a1;
- (id)_edgeCacheConfigRequestTypeForType:(long long)a0;

@end
