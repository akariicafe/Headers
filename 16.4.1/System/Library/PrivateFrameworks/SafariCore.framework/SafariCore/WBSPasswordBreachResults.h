@class NSMutableSet, NSMutableDictionary, WBSPasswordBreachContext;

@interface WBSPasswordBreachResults : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    WBSPasswordBreachContext *_context;
    NSMutableDictionary *_resultRecordsByPersistentIdentifier;
    NSMutableSet *_recentlyBreachedPersistentIdentifiers;
}

- (void)clearRecentlyBreachedResultRecords;
- (void)_restoreResultsFromPersistentStoreIfNecessary;
- (void)addResultRecords:(id)a0;
- (id)recentlyBreachedResultRecords;
- (void)markAllCompromisedResultRecordsAsRecentlyBreached;
- (void)clearAllResultsSynchronously;
- (id)initWithContext:(id)a0;
- (void)_saveResultsToPersistentStore;
- (id)resultRecordsForQueries:(id)a0;
- (void).cxx_destruct;

@end
