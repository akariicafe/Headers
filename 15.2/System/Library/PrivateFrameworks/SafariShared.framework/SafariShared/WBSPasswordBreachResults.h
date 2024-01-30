@class NSMutableSet, NSMutableDictionary, WBSPasswordBreachContext;

@interface WBSPasswordBreachResults : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    WBSPasswordBreachContext *_context;
    NSMutableDictionary *_resultRecordsByPersistentIdentifier;
    NSMutableSet *_recentlyBreachedPersistentIdentifiers;
}

- (void)addResultRecords:(id)a0;
- (void)markAllCompromisedResultRecordsAsRecentlyBreached;
- (void)clearRecentlyBreachedResultRecords;
- (void)_restoreResultsFromPersistentStoreIfNecessary;
- (id)initWithContext:(id)a0;
- (void)clearAllResultsSynchronously;
- (void).cxx_destruct;
- (void)_saveResultsToPersistentStore;
- (id)recentlyBreachedResultRecords;
- (id)resultRecordsForQueries:(id)a0;

@end
