@class MPAVController;

@interface MPAVPolicyEnforcer : NSObject {
    int _screenRecordingNotifyToken;
    BOOL _lastKnownScreenRecordingState;
}

@property (readonly, weak, nonatomic) MPAVController *controller;

- (void)_applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_isScreenRecordingDidChange:(BOOL)a0;
- (id)initWithAVController:(id)a0;
- (void)_unregisterForScreenRecordingNotifications;
- (void)_updateScreenRecordingState;
- (void)_registerForScreenRecordingNotifications;

@end
