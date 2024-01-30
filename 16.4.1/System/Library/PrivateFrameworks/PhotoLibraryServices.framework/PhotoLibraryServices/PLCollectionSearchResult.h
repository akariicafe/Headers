@class NSString, PSICollectionResult, NSDate, PSIDate;

@interface PLCollectionSearchResult : PLSearchResult

@property (readonly, nonatomic) PSICollectionResult *collectionResult;
@property (nonatomic) unsigned long long libraryScope;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSDate *sortDate;
@property (readonly, nonatomic) PSIDate *startDate;
@property (readonly, nonatomic) PSIDate *endDate;
@property (readonly, nonatomic) unsigned long long collectionType;

- (unsigned long long)type;
- (void).cxx_destruct;
- (unsigned long long)assetCount;
- (id)initWithGroupResult:(id)a0 collectionResult:(id)a1 libraryScope:(unsigned long long)a2;
- (id)keyAssetUUID;

@end
