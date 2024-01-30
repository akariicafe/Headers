@interface HIDServiceClient : NSObject {
    struct { struct __IOHIDEventSystemClient *system; void *serviceID; struct { void /* function */ *callback; id /* block */ block; void *target; void *refcon; } removal; struct { struct __IOHIDVirtualServiceClientCallbacksV2 *callbacks; void *target; void *refcon; } virtualService; struct __CFDictionary *cachedProperties; struct IOHIDServiceFastPathInterface **fastPathInterface; struct IOCFPlugInInterfaceStruct **plugInInterface; void *removalHandler; unsigned int primaryUsagePage; unsigned int primaryUsage; struct _IOHIDServiceClientUsagePair *usagePairs; unsigned int usagePairsCount; } _client;
}

- (id)description;
- (unsigned long long)_cfTypeID;
- (void)dealloc;

@end
