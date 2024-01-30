@class RadiosPreferences;

@interface MISManager : NSObject {
    struct __CFRunLoopSource { } *_scRunLoopSource;
    struct __SCDynamicStore { } *_scDynamicStore;
    struct NETRBClient { } *_netClient;
    int _state;
    int _reason;
    BOOL _needStateUpdate;
    RadiosPreferences *_radioPrefs;
}

+ (id)sharedManager;

- (void)applicationWillResignActive:(id)a0;
- (void)stopService;
- (void)setState:(int)a0;
- (void)applicationDidBecomeActive:(id)a0;
- (void)sendStateUpdate;
- (void).cxx_destruct;
- (id)init;
- (void)authenticate;
- (void)getState:(int *)a0 andReason:(int *)a1;
- (BOOL)didUserPreventData;
- (void)attachMIS;
- (void)detachMIS;
- (void)readMISState:(int *)a0 andReason:(int *)a1;

@end
