@interface HAENVolumeControl : NSObject {
    int _pid;
    BOOL _EUVolumeLimitFlagOn;
    BOOL _SKVolumeLimitFlagOn;
    BOOL _haenFeatureEnabled;
    BOOL _mxVolumeLimitOn;
    BOOL _wiredHeadphoneConnected;
    float _targetVolume80dB;
    float _targetVolume74dB;
    struct { float currVolume; float targetVolume; unsigned int volumeAction; } _stats;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)sharedInstance;

- (void)setDeviceInfo:(id)a0;
- (void)_updateFlags;
- (id)init;
- (struct { float x0; float x1; unsigned int x2; })getStats;
- (unsigned int)limitVolume:(id)a0;
- (void)_setMXVolumeLimit:(BOOL)a0;
- (BOOL)PME_enabled;
- (void)_fetchCategory:(const struct __CFString { } *)a0 routeInfo:(struct { struct __CFString *x0; struct __CFString *x1; struct __CFString *x2; } *)a1;
- (float)getCurrentVolumeForCategory:(const struct __CFString { } *)a0 route:(struct { struct __CFString *x0; struct __CFString *x1; struct __CFString *x2; } *)a1;
- (float)computeLimitedVolume:(float)a0 event:(id)a1 action:(unsigned int *)a2;
- (void)limitVolumeTo:(float)a0 category:(const struct __CFString { } *)a1 route:(struct { struct __CFString *x0; struct __CFString *x1; struct __CFString *x2; } *)a2 actionResult:(unsigned int *)a3;
- (void)_updateMXVolumeLimit;
- (BOOL)_RLSAllowsMXVolumeLimit;
- (void)updateMXVolumeLimitStatus;
- (void)wiredHeadphoneConnected:(BOOL)a0;

@end
