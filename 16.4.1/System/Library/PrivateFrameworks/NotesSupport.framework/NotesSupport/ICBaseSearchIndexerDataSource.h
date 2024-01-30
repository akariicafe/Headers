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

+ (void)markAccountReindexedForMigration:(id)a0;
+ (BOOL)isAccountReindexedForMigration:(id)a0;
+ (id)didReindexForMigrationUserDefaultKeyForIdentifier:(id)a0;

- (void)contextWillSave:(id)a0;
- (void)stopObservingChanges;
- (void)startObservingChanges;
- (void)clearObjectIDsToProcess;
- (BOOL)isFolderWithServerShareChanged:(id)a0;
- (unsigned long long)indexingPriority;
- (id)objectForSearchableItem:(id)a0 context:(id)a1;
- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)a0;
- (id)newManagedObjectContext;
- (id)init;
- (id)dataSourceIdentifier;
- (id)addNotesFromSubtree:(id)a0;
- (void).cxx_destruct;
- (id)persistentStoreCoordinator;
- (long long)decisionOnObjectID:(id)a0 searchableItemToIndex:(id *)a1 additionalItemsToIndex:(id *)a2 objectIDURIToDelete:(id *)a3 additionalUniqueIdentifiersToDelete:(id *)a4 context:(id)a5;
- (id)indexableObjectIDsWithURIs:(id)a0 context:(id)a1;
- (id)objectForManagedObjectIDURI:(id)a0 context:(id)a1;
- (id)objectIDsNeedingProcessing;
- (void)searchIndexerDidFinishDeletingSearchableItemsWithObjectIDURIs:(id)a0 error:(id)a1;
- (void)searchIndexerDidFinishIndexingObjectIDs:(id)a0 error:(id)a1;
- (void)searchIndexerWillDeleteSearchableItemsWithObjectIDURIs:(id)a0;
- (void)searchIndexerWillIndexObjectIDs:(id)a0;
- (void)stageForReindexingWithContext:(id)a0;
- (void)stageObjectIDURIsForIndexing:(id)a0 context:(id)a1;
- (id)additionalItemsForObject:(id)a0;
- (id)additionalUniqueIdentifiersToDeleteForObject:(id)a0;
- (BOOL)isPaperKitOrSynapseAttachment:(id)a0;
- (id)searchableItemResultForObject:(id)a0;
- (BOOL)_loadStateDictionaryWithFileManager:(id *)a0 fileURL:(id *)a1 NSError:(id *)a2 fileExists:(BOOL *)a3 savedDictionary:(id *)a4;
- (BOOL)addNewObjectsForProcessing:(id)a0;
- (void)clearObjectIDsToIgnoreAndStageForReindexing;
- (void)loadOrClearStateIfNecessary;
- (id)loadStateDictionary;
- (void)logFileSizeForFileAtPath:(id)a0 fileManager:(id)a1;
- (id)moveIndexingTrackingFromUserDefaultsToFileIfNecessary;
- (id)objectIDsFromSearchableItems:(id)a0;
- (void)resetContextObservers;
- (BOOL)saveStateDictionary:(id)a0;
- (void)saveStateIfNecessary;
- (BOOL)shouldIndexableObjectExistInIndexing:(id)a0;

@end
