@class NSArray, NSString, NSDate;

@interface PLAssetSearchResult : PLSearchResult

@property (readonly, nonatomic) NSArray *assetUUIDs;
@property (readonly, nonatomic) NSDate *sortDate;
@property (readonly, nonatomic) NSString *identifier;

- (unsigned long long)type;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)assetCount;
- (id)keyAssetUUID;

@end
