@class NSString;

@interface HAENUnknownDeviceManager : NSObject {
    BOOL _alertSupported;
    struct __CFUserNotification { } *_notification;
    NSString *_deviceName;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _connectionCnt;
    BOOL _alertPending;
    unsigned long long _adamSessionID;
}

+ (id)sharedInstance;

- (BOOL)_isAlertSupported;
- (id)init;
- (void).cxx_destruct;
- (BOOL)unknownWiredHeadsetConnected;
- (void)updateWiredDeviceStatus;
- (void)unknownWiredConnectionDidChange:(BOOL)a0;
- (void)_wiredDeviceSessionCreated:(id)a0 SessionID:(unsigned long long)a1;
- (void)_wiredDeviceSessionInit:(id)a0;
- (void)_processWiredDevice:(id)a0;
- (void)_resetWiredStatus;
- (BOOL)_shouldSurfaceAlert:(id)a0;
- (void)_processPrompt:(id)a0;
- (void)_updateMXVolumeLimitStatus:(id)a0;
- (BOOL)_isUnknownWiredHeadset:(id)a0;
- (void)surfaceAlertBox;
- (void)_wiredDeviceSessionDestroyed:(id)a0;
- (void)deviceSessionCreated:(id)a0 SessionID:(unsigned long long)a1;
- (void)deviceSessionDestroyed:(id)a0;

@end
