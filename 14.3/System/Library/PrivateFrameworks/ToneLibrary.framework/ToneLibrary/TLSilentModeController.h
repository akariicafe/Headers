@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface TLSilentModeController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    int _ringerSwitchChangedNotifyToken;
    long long _silentModeStatus;
}

@property (class, readonly) TLSilentModeController *sharedSilentModeController;

@property (readonly) long long silentModeStatus;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_assertNotRunningOnAccessQueue;
- (void)_assertRunningOnAccessQueue;
- (void)_performBlockOnAccessQueue:(id /* block */)a0;
- (BOOL)_registerRingerSwitchChangedNotifyToken;
- (long long)_silentModeStatusForRingerSwitchChangedNotifyToken:(int)a0;
- (void)_cancelRingerSwitchChangedNotifyToken;
- (void)_updateSilentModeStatusUsingRingerSwitchChangedNotifyToken:(int)a0;
- (void)_setSilentModeStatus:(long long)a0;

@end
