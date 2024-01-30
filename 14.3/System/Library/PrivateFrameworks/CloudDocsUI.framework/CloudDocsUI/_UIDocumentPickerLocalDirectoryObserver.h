@class NSDate, NSString, NSArray, NSPredicate, NSOrderedSet, NSOperationQueue, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _UIDocumentPickerLocalDirectoryObserver : _UIArrayController <_UIDocumentPickerVnodeDispatchSourceDelegate, _UIDocumentPickerDirectoryObserver> {
    NSArray *_sortDescriptors;
    NSOrderedSet *_staticItems;
    NSPredicate *_queryPredicate;
    NSObject<OS_dispatch_queue> *_queryDispatchQueue;
    NSArray *_sources;
    NSMutableDictionary *_resultsForSources;
    BOOL _updateScheduled;
}

@property (retain, nonatomic) NSDate *lastSnapshotDate;
@property (retain, nonatomic) NSOperationQueue *queryWorkerQueue;
@property (nonatomic) BOOL afterInitialUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSOrderedSet *staticItems;
@property (retain, nonatomic) NSPredicate *queryPredicate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)initialUpdate;
- (BOOL)objectAttributeModified:(id)a0 newObject:(id)a1;
- (void)callUpdateHandler:(id)a0 changeDictionary:(id)a1;
- (void)invalidate;
- (id)isVisiblePredicate;
- (id)initWithScopes:(id)a0 delegate:(id)a1;
- (void)updateResultsForSource:(id)a0;
- (id)gatherResultsForSource:(id)a0;
- (id)gatherResults;
- (void)dispatchSourceDidReceiveEvent:(id)a0;

@end
