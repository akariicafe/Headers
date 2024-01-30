@class NSString;

@interface BCSCloudKitQueryProvider : NSObject <BCSCloudKitQueryProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)queryForFetchBloomFilterAndConfigItemWithType:(long long)a0;
- (id)queryForFetchShardIdentifier:(id)a0;
- (id)queryForFetchItemsWithStartIndex:(long long)a0 endIndex:(long long)a1 type:(long long)a2;

@end
