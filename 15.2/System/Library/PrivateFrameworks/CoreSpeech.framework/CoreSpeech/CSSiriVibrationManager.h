@class NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriVibrationManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    long long _ringVibrationState;
    long long _silentVibrationState;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)vibratesForDeviceRingerSwitchState:(long long)a0;
- (BOOL)_silentVibrationValue;
- (BOOL)_ringVibrationValue;
- (void)_fetchRingVibrationValue;
- (void)_fetchSilentVibrationValue;
- (void)handleRingVibrationValueChange;
- (void)handleSilentVibrationValueChange;

@end
