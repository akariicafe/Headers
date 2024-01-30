@class PSIDatabase, NSDictionary, PLSearchProcessor, NSObject, PHFetchResult, NSCalendar, NSString, NSDateIntervalFormatter, PLSearchIndexDateFormatter, PSIQuery, NSArray, PLPhotoLibrary, NSDateComponents;
@protocol OS_dispatch_queue, PXSearchResultsSectionedDataSourceChangeObserver;

@interface PXSearchResultsSectionedDataSource : NSObject <PXSearchResultsValueDelegate, PXSearchTopAssetsResultChangeDelegate>

@property (nonatomic) BOOL ignorePastResults;
@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) NSArray *uncommittedResults;
@property (nonatomic) unsigned long long sectionFetchIndex;
@property (nonatomic) unsigned long long maxGroupedResultsCount;
@property (nonatomic) unsigned long long queryTag;
@property (nonatomic) unsigned long long uncommittedMaxGroupedResultsCount;
@property (nonatomic) unsigned long long unprocessedSearchResultsCount;
@property (retain, nonatomic) PLPhotoLibrary *photoLibrary;
@property (retain, nonatomic) PLSearchIndexDateFormatter *dateFormatter;
@property (retain, nonatomic) NSDateIntervalFormatter *dateIntervalFormatter;
@property (retain, nonatomic) PLSearchProcessor *searchProcessor;
@property (retain, nonatomic) PSIDatabase *searchIndex;
@property (retain, nonatomic) PSIQuery *query;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) _Atomic BOOL didMerge;
@property (retain, nonatomic) PHFetchResult *homePersons;
@property (retain, nonatomic) NSArray *suggestions;
@property (retain, nonatomic) NSArray *uncommittedSuggestions;
@property (retain) NSDictionary *sceneAncestryInformation;
@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSDateComponents *dateRangeFormattingComponents;
@property (nonatomic) BOOL wordEmbeddingsRequested;
@property (weak, nonatomic) id<PXSearchResultsSectionedDataSourceChangeObserver> changeObserver;
@property (nonatomic) BOOL resultsReady;
@property (readonly) NSDictionary *debugDictionary;
@property (copy, nonatomic) id /* block */ topAssetFilter;
@property (readonly, nonatomic) NSArray *matchedOCRAssetUUIDs;
@property (readonly, nonatomic) NSArray *matchedQueryStrings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)postQuerySearchResultsLog;
+ (id)topAssetsSectionForSearchResultsValue:(id)a0;

- (BOOL)hasPendingChanges;
- (long long)numberOfSections;
- (id)titleForHeaderInSection:(long long)a0;
- (void)cancel;
- (void).cxx_destruct;
- (id)initForUnitTests;
- (long long)numberOfSearchResultsInSection:(long long)a0;
- (void)_asyncFetchAssetsWithQueryTag:(unsigned long long)a0;
- (void)_confirmationDidFinish:(id)a0;
- (id)_fetchObjectsWithEntityName:(id)a0 uuids:(id)a1;
- (void)_inqBackgroundProcessAssetResults:(id)a0 assetResultsForCompletions:(id)a1 collectionResults:(id)a2 topAssetsResult:(id)a3 topCollectionResults:(id)a4 withTag:(unsigned long long)a5 searchString:(id)a6 representedObjects:(id)a7 maxSuggestionCount:(unsigned long long)a8 priorityAssetUUID:(id)a9;
- (void)_inqCancel;
- (BOOL)_shouldCancel:(unsigned long long)a0;
- (void)_updateResultsWithMergeTargetPerson:(id)a0 sourcePerson:(id)a1 tombstonedCandidatesLocalIdentifiers:(id)a2;
- (id)_wordEmbeddingSubstitutionsWantsSubstitutedString:(BOOL)a0;
- (id)allSearchResultsForSection:(long long)a0;
- (void)collapseSection:(long long)a0;
- (void)didChangeThumbnailAssetsForSearchResult:(id)a0;
- (void)didChangeThumbnailAssetsForSearchResult:(id)a0 atIndexes:(id)a1;
- (void)expandSection:(long long)a0;
- (id)initWithSearchIndex:(id)a0 photoLibrary:(id)a1;
- (BOOL)isSectionExpandable:(long long)a0;
- (BOOL)isSectionExpanded:(long long)a0;
- (BOOL)isTopAssetsSection:(long long)a0;
- (void)mergePendingChanges;
- (long long)numberOfVisibleSearchResultsInSection:(long long)a0;
- (BOOL)searchIsFinished:(id)a0;
- (id)searchResultAtIndexPath:(id)a0;
- (id)selectedWordEmbeddingTextAtIndex:(unsigned long long)a0;
- (void)setSearchString:(id)a0 representedObjects:(id)a1 maxSuggestionCount:(unsigned long long)a2 priorityAssetUUID:(id)a3 libraryScope:(unsigned long long)a4;
- (id)stringWithStartDate:(id)a0 endDate:(id)a1;
- (id)tapToRadarAttachments;
- (id)wordEmbeddingSubstitutions;

@end
