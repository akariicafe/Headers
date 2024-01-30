@interface PSSystemConfigurationDynamicStoreNETRBWatcher : NSObject {
    struct __CFRunLoopSource { } *_scRunLoopSource;
    struct __SCDynamicStore { } *_scDynamicStore;
    int _netrbState;
    int _netrbReason;
}

+ (id)sharedManager;

- (void)sendStateUpdate;
- (void)getNETRBState:(int *)a0 andReason:(int *)a1;
- (BOOL)isTetheringEnabled;
- (BOOL)isDataEnabled;
- (void)readNETRBState:(int *)a0 andReason:(int *)a1;
- (BOOL)shouldShowTethering;
- (id)init;
- (void)dealloc;

@end
