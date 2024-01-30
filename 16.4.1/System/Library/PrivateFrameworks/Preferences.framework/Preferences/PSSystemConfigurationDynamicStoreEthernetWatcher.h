@interface PSSystemConfigurationDynamicStoreEthernetWatcher : NSObject {
    struct __SCDynamicStore { } *_dynamicStore;
    struct __CFRunLoopSource { } *_dynamicStoreSource;
}

+ (id)sharedManager;

- (BOOL)isHiddenEthernetInterface:(struct __SCNetworkInterface { } *)a0;
- (void)registerForEthernetAdapterNotifications;
- (void)dealloc;
- (id)init;
- (BOOL)hasEthernetNetworkInterfaces;
- (id)ethernetNetworkInterfaces;
- (void)ethernetDynamicStoreDidChange;

@end
