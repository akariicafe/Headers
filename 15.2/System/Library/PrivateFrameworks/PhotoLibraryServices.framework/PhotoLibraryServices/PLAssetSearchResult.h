@class NSArray, NSDate;

@interface PLAssetSearchResult : PLSearchResult

@property (readonly, nonatomic) NSArray *assetUUIDs;
@property (readonly, nonatomic) NSDate *sortDate;

- (void).cxx_destruct;
- (id)keyAssetUUID;
- (unsigned long long)assetCount;
- (unsigned long long)type;

@end
