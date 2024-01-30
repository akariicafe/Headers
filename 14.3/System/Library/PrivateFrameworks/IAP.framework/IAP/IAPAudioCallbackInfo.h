@class CPDistributedNotificationCenter, NSLock;

@interface IAPAudioCallbackInfo : NSObject {
    void /* function */ *_deviceStateChangedCallback;
    void *_deviceStateChangedContext;
    void /* function */ *_volumeChangedCallback;
    void *_volumeChangedContext;
    void /* function */ *_pauseOnHeadphoneDisconnectChangedCallback;
    void *_pauseOnHeadphoneDisconnectChangedContext;
    void /* function */ *_volumeControlSupportChangedCallback;
    void *_volumeControlSupportChangedContext;
    CPDistributedNotificationCenter *_dnCenter;
    CPDistributedNotificationCenter *_dnCenteriAP2;
    struct __CFRunLoop { } *_dnCenterRunLoop;
    NSLock *_lock;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_handleiAPDaemonDied:(id)a0;
- (void)startNotificationCenterOnRunLoop:(struct __CFRunLoop { } *)a0;
- (void)_deviceStateChanged:(id)a0;
- (void)_volumeChanged:(id)a0;
- (void)_pauseOnHeadphoneDisconnectChanged:(id)a0;
- (void)_volumeControlSupportChanged:(id)a0;
- (void)setupDeviceStateChangedCallback:(void /* function */ *)a0 withContext:(void *)a1 andRunLoop:(struct __CFRunLoop { } *)a2;
- (void)clearDeviceStateChangedCallback;
- (void)setupVolumeChangedCallback:(void /* function */ *)a0 withContext:(void *)a1 andRunLoop:(struct __CFRunLoop { } *)a2;
- (void)clearVolumeChangedCallback;
- (void)setupPauseOnHeadphoneDisconnectChangedCallback:(void /* function */ *)a0 withContext:(void *)a1 andRunLoop:(struct __CFRunLoop { } *)a2;
- (void)clearPauseOnHeadphoneDisconnectChangedCallback;
- (void)setupVolumeControlSupportChangedCallback:(void /* function */ *)a0 withContext:(void *)a1 andRunLoop:(struct __CFRunLoop { } *)a2;
- (void)clearVolumeControlSupportChangedCallback;

@end
