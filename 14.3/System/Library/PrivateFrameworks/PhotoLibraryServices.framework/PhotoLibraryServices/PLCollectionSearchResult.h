@class NSString, PSICollectionResult, NSDate, PSIDate;

@interface PLCollectionSearchResult : PLSearchResult

@property (readonly, nonatomic) PSICollectionResult *collectionResult;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSDate *sortDate;
@property (readonly, nonatomic) PSIDate *startDate;
@property (readonly, nonatomic) PSIDate *endDate;
@property (readonly, nonatomic) unsigned long long collectionType;

- (void).cxx_destruct;
- (id)keyAssetUUID;
- (unsigned long long)type;
- (id)initWithGroupResult:(id)a0 collectionResult:(id)a1;
- (unsigned long long)assetCount;

@end
