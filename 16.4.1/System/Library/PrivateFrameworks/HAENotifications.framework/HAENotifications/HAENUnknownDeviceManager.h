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
- (void)deviceSessionCreated:(id)a0 SessionID:(unsigned long long)a1;
- (void)_processPrompt:(id)a0;
- (void)deviceSessionDestroyed:(id)a0 isWired:(BOOL)a1;
- (void)surfaceAlertBox;
- (BOOL)_isUnknownWiredHeadset:(id)a0;
- (void)_processWiredDevice:(id)a0;
- (void)_resetWiredStatus;
- (BOOL)_shouldSurfaceAlert:(id)a0;
- (void)_updateMXVolumeLimitStatus:(id)a0;
- (void)_wiredDeviceSessionCreated:(id)a0 SessionID:(unsigned long long)a1;
- (void)_wiredDeviceSessionDestroyed:(id)a0;
- (void)_wiredDeviceSessionInit:(id)a0;
- (id)getDeviceName;
- (BOOL)isDeviceHeadphoneJack:(id)a0;
- (void)unknownWiredConnectionDidChange:(BOOL)a0;
- (BOOL)unknownWiredHeadsetConnectedThroughB204;
- (void)updateWiredDeviceStatus;

@end
