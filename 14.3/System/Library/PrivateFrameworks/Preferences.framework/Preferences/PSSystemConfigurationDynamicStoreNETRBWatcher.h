@interface PSSystemConfigurationDynamicStoreNETRBWatcher : NSObject {
    struct __CFRunLoopSource { } *_scRunLoopSource;
    struct __SCDynamicStore { } *_scDynamicStore;
    int _netrbState;
    int _netrbReason;
}

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)sendStateUpdate;
- (BOOL)isDataEnabled;
- (BOOL)isTetheringEnabled;
- (void)readNETRBState:(int *)a0 andReason:(int *)a1;
- (void)getNETRBState:(int *)a0 andReason:(int *)a1;
- (BOOL)shouldShowTethering;

@end
