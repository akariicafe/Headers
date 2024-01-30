@class PXSearchQueryResult, NSString, NSDictionary, NSArray, PXSearchIndexManager, NSObject;
@protocol OS_dispatch_queue;

@interface PXSearchQueryResultsProcessor : NSObject <PHPhotoLibraryChangeObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PXSearchQueryResult *currentSearchQueryResult;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) NSDictionary *personSearchResultsMap;
@property (copy, nonatomic) NSArray *curatedAssetsSearchResults;
@property (copy, nonatomic) NSArray *removedObjects;
@property (copy, nonatomic) NSArray *hiddenObjects;
@property (readonly, copy, nonatomic) id /* block */ processingHandler;
@property (readonly, nonatomic) PXSearchIndexManager *searchIndexManager;

+ (id)_fetchPersonsForPersonSearchResults:(id)a0 photoLibrary:(id)a1;
+ (BOOL)_verifyExpectedWorkQueue;
+ (BOOL)_isBootstrapNameChange:(id)a0;
+ (id)_reloadItemIdentifiersForChangedObjects:(id)a0 inAssetSearchResults:(id)a1;

- (void)photoLibraryDidChange:(id)a0;
- (id)initForUnitTesting;
- (id)initWithSearchIndexManager:(id)a0 dispatchQueue:(id)a1 resultsProcessingHandler:(id /* block */)a2;
- (void)processSearchResults:(id)a0 assetSearchResults:(id)a1 personSearchResults:(id)a2 searchSuggestions:(id)a3 sceneIdentifiers:(id)a4 forSearchQuery:(id)a5;
- (id)_generateUpdatedPersonSearchResultsFromPersonSearchResults:(id)a0 persons:(id)a1;
- (void)_executeResultsHandlerForUpdatedSearchQueryResult:(id)a0 curatedAssetsSearchResults:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_processPeopleChangesFromNotification:(id)a0;
- (void)_processPersonMergeFromNotification:(id)a0 searchQueryResult:(id)a1;
- (void)_processPersonNameChangeFromBootstrapContext:(id)a0 searchQueryResult:(id)a1;
- (void)_updatePersonSearchResultsForSearchQueryResult:(id)a0 withMergeTargetPerson:(id)a1 sourcePerson:(id)a2 tombstonedCandidatesLocalIdentifiers:(id)a3;
- (id)_localIdentifierForPersonUUID:(id)a0;
- (void)_updateSearchQueryResult:(id)a0 updatedPersonSearchResultsMap:(id)a1;
- (void)addObserverForPeopleChangeHandlingNotifications;
- (void)_performCurationAndUpdateChangedObjects:(id)a0;
- (void)addObserverForCuratedAssetsLibraryChanges;
- (BOOL)_shouldRecurateForChangeDetails:(id)a0;

@end
