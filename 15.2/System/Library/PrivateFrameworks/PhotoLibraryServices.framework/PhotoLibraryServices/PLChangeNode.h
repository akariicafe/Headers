@class PLDelayedSaveActionsProcessor, NSString, NSURL, PLLibraryServicesManager, PLUpdatedOrderKeys, PLCoreDataChangeMerger;
@protocol PLChangePublisher;

@interface PLChangeNode : NSObject {
    NSURL *_libraryUrl;
    PLLibraryServicesManager *_libraryServicesManager;
    unsigned char _nodeUUID[16];
    NSString *_nodeUUIDShortString;
    PLUpdatedOrderKeys *_updatedOrderKeys;
    PLCoreDataChangeMerger *_changeMerger;
    id<PLChangePublisher> _changePublisher;
    PLDelayedSaveActionsProcessor *_delayedSaveActionsProcessor;
}

- (void)publishChangesForDidSaveObjectIDsNotification:(id)a0;
- (id)initWithLibraryURL:(id)a0 changeMerger:(id)a1 changePublisher:(id)a2 libraryServicesManager:(id)a3;
- (void)publishRemoteChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (void)distributeRemoteContextDidSaveEvent:(id)a0 delayedSaveActionsDetail:(id)a1 transaction:(id)a2;
- (void)disconnectManagedObjectContext:(id)a0;
- (void)invalidate;
- (BOOL)_isInvalidRemoteChangeEvent:(id)a0 reply:(id /* block */)a1;
- (void)connectManagedObjectContext:(id)a0;
- (void)dealloc;

@end
