@class NSObject, BrightnessSystemClient;
@protocol OS_os_log;

@interface KeyboardBrightnessClient : NSObject {
    BrightnessSystemClient *bsc;
    NSObject<OS_os_log> *_logHandle;
}

- (id)init;
- (void)dealloc;
- (void)unregisterKeyboardNotificationBlock;
- (float)brightnessForKeyboard:(unsigned long long)a0;
- (BOOL)isAmbientFeatureAvailableOnKeyboard:(unsigned long long)a0;
- (BOOL)isBacklightSaturatedOnKeyboard:(unsigned long long)a0;
- (BOOL)setBrightness:(float)a0 forKeyboard:(unsigned long long)a1;
- (void)registerNotificationForKeys:(id)a0 keyboardID:(unsigned long long)a1 block:(id /* block */)a2;
- (BOOL)suspendIdleDimming:(BOOL)a0 forKeyboard:(unsigned long long)a1;
- (id)copyKeyboardBacklightIDs;
- (BOOL)setBrightness:(float)a0 fadeSpeed:(int)a1 commit:(BOOL)a2 forKeyboard:(unsigned long long)a3;
- (BOOL)isBacklightSuppressedOnKeyboard:(unsigned long long)a0;
- (BOOL)isBacklightDimmedOnKeyboard:(unsigned long long)a0;
- (BOOL)enableAutoBrightness:(BOOL)a0 forKeyboard:(unsigned long long)a1;
- (BOOL)isKeyboardBuiltIn:(unsigned long long)a0;
- (double)idleDimTimeForKeyboard:(unsigned long long)a0;
- (BOOL)setIdleDimTime:(double)a0 forKeyboard:(unsigned long long)a1;
- (BOOL)isIdleDimmingSuspendedOnKeyboard:(unsigned long long)a0;
- (BOOL)isAutoBrightnessEnabledForKeyboard:(unsigned long long)a0;

@end
