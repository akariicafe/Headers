@class NSMutableDictionary, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface WBSPasswordWarningStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { struct SuddenTerminationDisabler *__value_; } __ptr_; } _suddenTerminationDisabler;
    BOOL _hasPendingChanges;
    NSURL *_backingStoreURL;
    NSMutableDictionary *_lastWarningDatesByPersistentIdentifier;
}

@property (class, readonly, nonatomic) WBSPasswordWarningStore *sharedStore;

- (void).cxx_destruct;
- (void)clearStoreSynchronously;
- (id)_initWithBackingStoreURL:(id)a0;
- (void)_saveStoreSoon;
- (id)_initWithDefaultBackingStore;
- (void)_saveStoreNow;
- (void)_loadStoreIfNecessary;
- (void)_addPersistentIdentifier:(id)a0 withLastWarningDate:(id)a1;
- (void)getContainsPersistentIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)addPersistentIdentifier:(id)a0;
- (void)synchronousyClearIdentifiersAddedAfterDate:(id)a0;
- (id).cxx_construct;
- (void)saveStoreSynchronously;

@end
