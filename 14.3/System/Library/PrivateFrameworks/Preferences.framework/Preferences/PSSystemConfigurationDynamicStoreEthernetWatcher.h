@interface PSSystemConfigurationDynamicStoreEthernetWatcher : NSObject {
    struct __SCDynamicStore { } *_dynamicStore;
    struct __CFRunLoopSource { } *_dynamicStoreSource;
}

+ (id)sharedManager;

- (id)init;
- (BOOL)isHiddenEthernetInterface:(struct __SCNetworkInterface { } *)a0;
- (BOOL)hasEthernetNetworkInterfaces;
- (void)dealloc;
- (id)ethernetNetworkInterfaces;
- (void)registerForEthernetAdapterNotifications;
- (void)ethernetDynamicStoreDidChange;

@end
