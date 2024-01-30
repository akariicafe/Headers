@interface HPAccessibilitySettingsManager : NSObject

+ (void)setTouchAccommodationsHoldDuration:(double)a0;
+ (void)setTouchAccommodationsTapActivationTimeout:(double)a0;
+ (void)setVoiceOverDoubleTapInterval:(double)a0;
+ (void)setTouchAccommodationsTapActivationMethod:(long long)a0;
+ (void)setTouchAccommodationsIgnoreRepeatEnabled:(BOOL)a0;
+ (void)setVoiceOverAudioDuckingEnabled:(BOOL)a0;
+ (void)setTouchAccommodationsEnabled:(BOOL)a0;
+ (void)setTouchAccommodationsHoldDurationEnabled:(BOOL)a0;
+ (void)setTouchAccommodationsIgnoreRepeatDuration:(double)a0;
+ (BOOL)getVoiceOverSiriQuietRoomDisabled;
+ (void)setVoiceOverTouchSpeakingRate:(float)a0;
+ (void)setTouchAccomodationsEnabled:(BOOL)a0;
+ (void)setVoiceOverDoubleTapTimeoutInterval:(double)a0;
+ (void)setVoiceOverSiriQuietRoomDisabled:(BOOL)a0;
+ (void)setTapAssistanceGestureDelay:(double)a0;

- (void)homeKitAccessibilitySettingForKeyPathChanged:(id)a0 settingValueFromHome:(id)a1 settingValue:(id)a2;

@end
