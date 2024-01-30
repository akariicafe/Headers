@class MPAVController;

@interface MPAVPolicyEnforcer : NSObject {
    int _screenRecordingNotifyToken;
    BOOL _lastKnownScreenRecordingState;
}

@property (readonly, weak, nonatomic) MPAVController *controller;

- (id)initWithAVController:(id)a0;
- (void)_isScreenRecordingDidChange:(BOOL)a0;
- (void)_registerForScreenRecordingNotifications;
- (void)_updateScreenRecordingState;
- (void)_unregisterForScreenRecordingNotifications;
- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)a0;
- (void)dealloc;

@end
