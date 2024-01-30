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

- (void)_performBlockOnAccessQueue:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_assertRunningOnAccessQueue;
- (void)dealloc;
- (void)_assertNotRunningOnAccessQueue;
- (BOOL)_registerRingerSwitchChangedNotifyToken;
- (long long)_silentModeStatusForRingerSwitchChangedNotifyToken:(int)a0;
- (void)_cancelRingerSwitchChangedNotifyToken;
- (void)_updateSilentModeStatusUsingRingerSwitchChangedNotifyToken:(int)a0;
- (void)_setSilentModeStatus:(long long)a0;

@end
