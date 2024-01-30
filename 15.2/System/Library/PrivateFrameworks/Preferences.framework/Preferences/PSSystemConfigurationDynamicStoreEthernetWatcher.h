@interface PSSystemConfigurationDynamicStoreEthernetWatcher : NSObject {
    struct __SCDynamicStore { } *_dynamicStore;
    struct __CFRunLoopSource { } *_dynamicStoreSource;
}

+ (id)sharedManager;

- (BOOL)hasEthernetNetworkInterfaces;
- (void)registerForEthernetAdapterNotifications;
- (BOOL)isHiddenEthernetInterface:(struct __SCNetworkInterface { } *)a0;
- (id)init;
- (void)dealloc;
- (void)ethernetDynamicStoreDidChange;
- (id)ethernetNetworkInterfaces;

@end
