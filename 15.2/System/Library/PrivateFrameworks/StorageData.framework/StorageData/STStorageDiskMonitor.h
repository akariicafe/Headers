@class STStorageSpace, NSObject;
@protocol OS_dispatch_source;

@interface STStorageDiskMonitor : NSObject {
    long long _updateDelta;
}

@property (retain) NSObject<OS_dispatch_source> *diskSizeTimer;
@property (readonly) long long deviceSize;
@property (readonly) STStorageSpace *storageSpace;

+ (id)sharedMonitor;

- (void)sync;
- (void).cxx_destruct;
- (id)init;
- (void)startMonitor;
- (void)stopMonitor;
- (void)updateDiskSpace;
- (void)_sendNotify:(id)a0;
- (void)sendNotify:(id)a0;

@end
