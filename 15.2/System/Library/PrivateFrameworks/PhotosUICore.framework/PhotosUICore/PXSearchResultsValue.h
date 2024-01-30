@class NSDate, NSString, NSArray, PHPerson, NSAttributedString, NSMutableDictionary, NSDictionary, PSIDate, NSObject, PLSearchResult;
@protocol OS_dispatch_queue, PXSearchResultsValueDelegate;

@interface PXSearchResultsValue : NSObject <PXSearchResultsValueSorting, PXSearchResultItem> {
    NSObject<OS_dispatch_queue> *_queue;
    double _score;
    unsigned long long _searchCategories;
    NSAttributedString *_attributedDisplayTitle;
    NSString *_displaySubtitle;
    PSIDate *_startDate;
    PSIDate *_endDate;
}

@property (retain, setter=_setSelectedDisplayTitle:) NSString *selectedDisplayTitle;
@property (readonly) NSMutableDictionary *uuidToAssetMap;
@property (weak, nonatomic) id<PXSearchResultsValueDelegate> delegate;
@property (retain, setter=_setSearchResult:) PLSearchResult *searchResult;
@property (setter=_setApproximateCount:) unsigned long long approximateCount;
@property (retain, setter=_setAssetUUIDs:) NSArray *assetUUIDs;
@property (retain, nonatomic, setter=_setDate:) NSDate *date;
@property (retain, nonatomic, setter=_setPerson:) PHPerson *person;
@property (retain, setter=_setDateFilterString:) NSString *dateFilterString;
@property (readonly, copy) NSString *searchString;
@property (readonly, nonatomic) NSArray *searchTokens;
@property (copy, nonatomic) NSString *transientToken;
@property (readonly, copy) NSString *displayTitle;
@property (readonly, copy) NSString *displaySubtitle;
@property (readonly) unsigned long long collectionType;
@property (readonly) NSString *collectionUUID;
@property (readonly) NSString *collectionTitle;
@property (readonly) NSString *collectionSubtitle;
@property (readonly, copy) NSArray *assets;
@property (readonly) unsigned long long searchCategories;
@property (readonly) double score;
@property (readonly) NSDictionary *debugDictionary;
@property (readonly, nonatomic) BOOL isSingletonPersonResult;
@property (readonly, nonatomic) unsigned long long numberOfAssets;
@property (readonly, nonatomic) unsigned long long itemType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)compare:(id)a0;
- (BOOL)isFinished;
- (unsigned long long)categoryAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)groupsMatchRanges;
- (void)_setCollectionType:(unsigned long long)a0 uuid:(id)a1 title:(id)a2 subtitle:(id)a3;
- (id)displayTitleWithDefaultAttributes:(id)a0 dimmedAttributes:(id)a1 selectedDisplayTitle:(id *)a2;
- (BOOL)isAssetResult;
- (void)fetchRemainingUUIDs:(id /* block */)a0;
- (void)fetchAllUUIDs:(id /* block */)a0;
- (void)_computeScoreWithMaxGroupedResultsCount:(unsigned long long)a0;
- (id)_startDateForAssetCollection:(id)a0;
- (id)assetLocalIdentifiersForPreview;
- (void)_setAsset:(id)a0 forUUID:(id)a1;
- (void)enumerateSearchIndexCategoriesUsingBlock:(id /* block */)a0;
- (void)setStartDate:(id)a0 endDate:(id)a1;

@end
