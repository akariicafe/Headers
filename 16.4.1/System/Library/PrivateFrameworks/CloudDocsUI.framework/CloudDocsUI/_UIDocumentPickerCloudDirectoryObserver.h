@class NSDate, NSMetadataQuery, NSArray, NSPredicate, NSOrderedSet, NSOperationQueue, NSString, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface _UIDocumentPickerCloudDirectoryObserver : _UIArrayController <_UIDocumentPickerDirectoryObserver> {
    NSOrderedSet *_staticItems;
    NSPredicate *_queryPredicate;
    NSURL *_firstURL;
    BOOL _recursive;
}

@property (retain, nonatomic) NSMetadataQuery *query;
@property (retain, nonatomic) NSArray *scopes;
@property (retain, nonatomic) NSDate *lastSnapshotDate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queryQueue;
@property (retain, nonatomic) NSOperationQueue *queryWorkerQueue;
@property (nonatomic) BOOL afterInitialUpdate;
@property (retain, nonatomic) NSOrderedSet *staticItems;
@property (retain, nonatomic) NSPredicate *queryPredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)callUpdateHandler:(id)a0 changeDictionary:(id)a1;
- (BOOL)objectAttributeModified:(id)a0 newObject:(id)a1;
- (void)_initialGatherFinished:(id)a0;
- (id)_queryResultsWithChangedObjects:(id)a0 changedResults:(id *)a1;
- (void)_queryUpdated:(id)a0;
- (void)_updateObservers:(id)a0;
- (void)_updateQuery;
- (void)assertOnQueryQueue;
- (id)initWithRecursiveScopes:(id)a0 delegate:(id)a1;
- (id)initWithScopes:(id)a0 delegate:(id)a1;
- (id)isVisiblePredicate;

@end
