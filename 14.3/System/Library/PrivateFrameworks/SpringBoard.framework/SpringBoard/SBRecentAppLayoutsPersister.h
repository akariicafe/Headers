@class NSArray, NSTimer, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface SBRecentAppLayoutsPersister : NSObject {
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSURL *_persistenceURL;
    NSTimer *_persistTimer;
    BOOL _initializedNewStoreOnDisk;
}

@property (retain, nonatomic) NSArray *recents;
@property (readonly, nonatomic) BOOL initializedNewStoreOnDisk;

- (void).cxx_destruct;
- (void)_loadRecents;
- (void)_enqueueDiskWrite;
- (id)_scheduledPersistTimer;
- (void)syncToDiskSynchronously;
- (id)initWithPersistenceURL:(id)a0;
- (void)_queue_writeCompressedProtobufRepresentationToDisk:(id)a0;
- (void)_persistTimerExpired:(id)a0;
- (void)syncToDiskSoonIfDirty;

@end
