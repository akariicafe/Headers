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

- (void)syncToDiskSynchronously;
- (void)_persistTimerExpired:(id)a0;
- (void)_loadRecents;
- (void)syncToDiskSoonIfDirty;
- (void).cxx_destruct;
- (void)_enqueueDiskWrite;
- (id)_scheduledPersistTimer;
- (void)_queue_writeCompressedProtobufRepresentationToDisk:(id)a0;
- (id)initWithPersistenceURL:(id)a0;

@end
