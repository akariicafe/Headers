@class NSString;

@interface MTDeviceCapacityMonitor : NSObject {
    void /* unknown type, empty encoding */ _observers;
    void /* unknown type, empty encoding */ capacityThreshold;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ vfsSource;
    void /* unknown type, empty encoding */ ___isDeviceCapacityAboveThreshold;
    void /* unknown type, empty encoding */ activeObserver;
    void /* unknown type, empty encoding */ _activeNotificationName;
}

@property (class, nonatomic, readonly) MTDeviceCapacityMonitor *shared;

@property (nonatomic) BOOL isDeviceStorageSpaceAvailableForPersistence;
@property (nonatomic, copy) NSString *activeNotificationName;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (long long)observeCapacityChange:(id /* block */)a0;
- (void)removeCapacityChangeObserverWith:(long long)a0;

@end
