@class NSString;

@interface BCSV1CloudServerBodyProvider : NSObject <BCSCloudServerBodyProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bodyForBusinessItemRequestWithBizID:(id)a0;
- (id)bodyForItemRequestWithBucketStartIndex:(long long)a0 endIndex:(long long)a1 type:(long long)a2;
- (id)bodyForConfigItemRequestWithType:(long long)a0;
- (id)bodyForBloomFilterRequestWithStartIndex:(long long)a0 shardCount:(long long)a1 type:(long long)a2;
- (id)bodyDictionaryForBusinessItemRequestWithBizID:(id)a0;
- (id)jsonDataForBodyDictionary:(id)a0;
- (id)bodyDictionaryForBusinessItemRequestWithBucketStartIndex:(long long)a0 endIndex:(long long)a1 type:(long long)a2;
- (id)bodyDictionaryForConfigItemWithType:(long long)a0;
- (id)bodyDictionaryForChatSuggestBloomFilterRequestWithStartIndex:(long long)a0 shardCount:(long long)a1 type:(long long)a2;

@end
