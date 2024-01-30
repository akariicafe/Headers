@class NSString, NSURL, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_queue;

@interface ICBaseSearchIndexerDataSource : NSObject <ICSearchIndexerDataSource>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly, copy, nonatomic) NSString *stateFilename;
@property (readonly, nonatomic) NSURL *stateFileURL;
@property (retain, nonatomic) NSMutableOrderedSet *objectIDsToProcess;
@property (retain, nonatomic) NSMutableOrderedSet *objectIDsBeingProcessed;
@property (readonly, nonatomic) NSString *uuid;
@property (nonatomic, getter=isObservingChanges) BOOL observingChanges;
@property BOOL needsReindexing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAccountReindexedForMigration:(id)a0;
+ (id)didReindexForMigrationUserDefaultKeyForIdentifier:(id)a0;
+ (void)markAccountReindexedForMigration:(id)a0;

- (void)stopObservingChanges;
- (id)persistentStoreCoordinator;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)indexingPriority;
- (void)stageForReindexingWithContext:(id)a0;
- (id)objectForManagedObjectIDURI:(id)a0 context:(id)a1;
- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)a0;
- (void)resetContextObservers;
- (void)loadOrClearStateIfNecessary;
- (BOOL)addNewObjectsForProcessing:(id)a0;
- (void)saveStateIfNecessary;
- (BOOL)shouldIndexableObjectExistInIndexing:(id)a0;
- (id)searchableItemForObject:(id)a0;
- (id)indexableObjectIDsWithURIs:(id)a0 context:(id)a1;
- (BOOL)saveStateDictionary:(id)a0;
- (void)clearObjectIDsToIgnoreAndStageForReindexing;
- (id)moveIndexingTrackingFromUserDefaultsToFileIfNecessary;
- (id)loadStateDictionary;
- (BOOL)_loadStateDictionaryWithFileManager:(id *)a0 fileURL:(id *)a1 NSError:(id *)a2 fileExists:(BOOL *)a3 savedDictionary:(id *)a4;
- (void)logFileSizeForFileAtPath:(id)a0 fileManager:(id)a1;
- (id)objectIDsNeedingProcessing;
- (long long)decisionOnObjectID:(id)a0 searchableItemToIndex:(id *)a1 objectIDURIToDelete:(id *)a2 context:(id)a3;
- (void)searchIndexerWillIndexObjectIDs:(id)a0;
- (void)searchIndexerDidFinishIndexingObjectIDs:(id)a0 error:(id)a1;
- (void)stageObjectIDURIsForIndexing:(id)a0 context:(id)a1;
- (void)searchIndexerWillDeleteSearchableItemsWithObjectIDURIs:(id)a0;
- (void)searchIndexerDidFinishDeletingSearchableItemsWithObjectIDURIs:(id)a0 error:(id)a1;
- (id)objectIDsFromSearchableItems:(id)a0;
- (id)newManagedObjectContext;
- (id)objectForSearchableItem:(id)a0 context:(id)a1;
- (void)startObservingChanges;
- (void)contextWillSave:(id)a0;
- (id)dataSourceIdentifier;
- (void)clearObjectIDsToProcess;
- (id)addNotesFromSubtree:(id)a0;
- (BOOL)isFolderWithServerShareChanged:(id)a0;

@end
