@interface HIDServiceClient : NSObject {
    struct { struct __IOHIDEventSystemClient *system; void *serviceID; struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } callbackLock; struct { void /* function */ *callback; id /* block */ block; void *target; void *refcon; } removal; struct { struct __IOHIDVirtualServiceClientCallbacksV2 *callbacks; void *target; void *refcon; } virtualService; struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } serviceLock; struct __CFDictionary *cachedProperties; struct IOHIDServiceFastPathInterface **fastPathInterface; struct IOCFPlugInInterfaceStruct **plugInInterface; void *removalHandler; unsigned int primaryUsagePage; unsigned int primaryUsage; struct _IOHIDServiceClientUsagePair *usagePairs; unsigned int usagePairsCount; } _client;
}

- (unsigned long long)_cfTypeID;
- (void)dealloc;
- (id)description;

@end
