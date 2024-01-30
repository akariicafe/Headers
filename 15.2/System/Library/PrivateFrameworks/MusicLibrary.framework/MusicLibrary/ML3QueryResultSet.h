@class ML3Query, NSObject, NSMutableArray, ML3QueryResultSet_BackingStore;
@protocol OS_dispatch_queue;

@interface ML3QueryResultSet : NSObject <NSCopying> {
    ML3QueryResultSet_BackingStore *_backingStore;
    BOOL _supportsIncrementalUpdate;
    NSMutableArray *_updateToLibraryCurrentRevisionCompletionBlocks;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_fixedPriorityQueue;
}

@property (readonly, nonatomic) ML3Query *query;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) long long revision;
@property (readonly, nonatomic) long long localRevision;

- (void)enumerateSectionsUsingBlock:(id /* block */)a0;
- (id)initWithQuery:(id)a0;
- (unsigned long long)entityLimit;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)updateToLibraryCurrentRevision;
- (long long)persistentIDAtIndex:(unsigned long long)a0;
- (id)_initWithQuery:(id)a0 supportsIncrementalUpdate:(BOOL)a1;
- (void)_loadCurrentFullResults;
- (void)_mergeChangesWithFromNewPIDs:(const void *)a0 changedPIDs:(void *)a1;
- (void)_onQueueAddUpdateFinishedBlock:(id /* block */)a0;
- (void)_onQueueInvokeAndClearUpdateFinishedBlocksWithDidUpdateResult:(BOOL)a0;
- (BOOL)_updateToLibraryCurrentRevision;

@end
