@class NRBypassQueue, NRMutableDeviceCollection, NSMutableDictionary, NSObject, NRSecureDevicePropertyStore;
@protocol OS_dispatch_queue;

@interface NRRegistry : NSObject <NRMutableStateParentDelegate> {
    NSMutableDictionary *_registryDiffObservers;
    NSMutableDictionary *_registrySecurePropertyObservers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _collectionLock;
    NRBypassQueue *_accessQueue;
    BOOL _queueRunning;
    BOOL _supportsWatch;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *managementQueue;
@property (retain, nonatomic) NRMutableDeviceCollection *collection;
@property (retain, nonatomic) NRMutableDeviceCollection *queueCollection;
@property (retain, nonatomic) NRSecureDevicePropertyStore *secureProperties;

+ (int)registerNotifyTokenWithName:(id)a0 withQueue:(id)a1 withBlock:(id /* block */)a2;
+ (unsigned long long)readNotifyToken:(int)a0;
+ (id)_nextToken;
+ (void)fixSecurePropertiesWithCollection:(id)a0 secureProperties:(id)a1 insecurePropertyNames:(id)a2;
+ (id)getReferencedSecureProperties:(id)a0 fromDiff:(id)a1;
+ (id)getReferencedSecurePropertyIDsFromDiff:(id)a0;

- (void)child:(id)a0 didApplyDiff:(id)a1;
- (void)enqueue:(id /* block */)a0;
- (id)initWithParameters:(id)a0;
- (void)_notifyObserversSecurePropertiesAreAvailableWithCollection:(id)a0 secureProperties:(id)a1;
- (id)init;
- (void)invalidate;
- (void)_startQueue;
- (void).cxx_destruct;
- (void)_notifyDiffObserversWithDiff:(id)a0 deviceCollection:(id)a1 secureProperties:(id)a2;
- (void)grabRegistryWithReadBlockAsync:(id /* block */)a0;
- (void)syncGrabRegistryWithWriteBlock:(id /* block */)a0;
- (void)removeSecurePropertiesObserver:(id)a0;
- (id)addDiffObserverWithWriteBlock:(id /* block */)a0;
- (id)addSecurePropertiesObserverWithReadBlock:(id /* block */)a0;
- (void)enqueueAsync:(id /* block */)a0;
- (void)enqueueBypass:(id /* block */)a0;
- (void)enqueueBypassAsync:(id /* block */)a0;
- (BOOL)enqueueUnlessSuspended:(id /* block */)a0;
- (void)grabRegistryWithReadBlock:(id /* block */)a0;
- (void)grabRegistryWithWriteBlockAsync:(id /* block */)a0;
- (void)performUnderCollectionLock:(id /* block */)a0;
- (void)removeDiffObserver:(id)a0;
- (BOOL)supportsWatch;
- (void)syncGrabRegistryWithReadBlock:(id /* block */)a0;

@end
