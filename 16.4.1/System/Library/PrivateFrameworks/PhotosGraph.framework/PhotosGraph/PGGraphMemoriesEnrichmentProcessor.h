@interface PGGraphMemoriesEnrichmentProcessor : NSObject {
    unsigned long long _numberOfMemoriesToEnrich;
}

+ (void)deleteNoLongerExistingMemoryNodes:(id)a0 fromFetchedGraphEphemeralMemoryByUniqueIdentifier:(id)a1 inPhotoLibrary:(id)a2 loggingConnection:(id)a3 progressReporter:(id)a4;
+ (id)enrichableMemoryNodesInGraph:(id)a0;
+ (id)fetchGraphEphemeralMemoryByUniqueIdentifierInPhotoLibrary:(id)a0 loggingConnection:(id)a1;
+ (void)insertOrUpdateEphemeralMemoriesForEnrichedMemories:(id)a0 fetchedGraphEphemeralMemoryByUniqueIdentifier:(id)a1 memoryPersister:(id)a2 graph:(id)a3 loggingConnection:(id)a4 progressReporter:(id)a5;

- (id)init;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (unsigned long long)_targetNumberOfMemoriesToEnrichWithPhotoLibrary:(id)a0 loggingConnection:(id)a1;
- (id)initWithNumberOfMemoriesToEnrich:(unsigned long long)a0;
- (id)sortedMemoryNodesToEnrichFromCollection:(id)a0 fetchedGraphEphemeralMemoryByUniqueIdentifier:(id)a1 loggingConnection:(id)a2;

@end
