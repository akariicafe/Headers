@class NSString, NSUUID;

@interface UIDevice : NSObject {
    long long _numDeviceOrientationObservers;
    float _batteryLevel;
    struct { unsigned char batteryMonitoringEnabled : 1; unsigned char proximityMonitoringEnabled : 1; unsigned char expectsFaceContactInLandscape : 1; unsigned char orientation : 3; unsigned char batteryState : 2; unsigned char proximityState : 1; unsigned char hasTouchPadOverride : 1; unsigned char hasTouchPad : 1; unsigned char isHardwareKeyboardAvailable : 1; } _deviceFlags;
}

@property (class, readonly, nonatomic) UIDevice *currentDevice;

@property (readonly, nonatomic, getter=_feedbackSupportLevel) long long feedbackSupportLevel;
@property (nonatomic) long long orientation;
@property (readonly, retain, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) BOOL _supportsPencil;
@property (nonatomic, setter=_setBacklightLevel:) float _backlightLevel;
@property (readonly, nonatomic, getter=_isHardwareKeyboardAvailable) BOOL _hardwareKeyboardAvailable;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *localizedModel;
@property (readonly, nonatomic) NSString *systemName;
@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) long long orientation;
@property (readonly, nonatomic) NSUUID *identifierForVendor;
@property (readonly, nonatomic, getter=isGeneratingDeviceOrientationNotifications) BOOL generatesDeviceOrientationNotifications;
@property (nonatomic, getter=isBatteryMonitoringEnabled) BOOL batteryMonitoringEnabled;
@property (readonly, nonatomic) long long batteryState;
@property (readonly, nonatomic) float batteryLevel;
@property (nonatomic, getter=isProximityMonitoringEnabled) BOOL proximityMonitoringEnabled;
@property (readonly, nonatomic) BOOL proximityState;
@property (readonly, nonatomic, getter=isMultitaskingSupported) BOOL multitaskingSupported;
@property (readonly, nonatomic) long long userInterfaceIdiom;

+ (BOOL)_isWatch;
+ (BOOL)_isLowEnd;
+ (long long)currentDeviceOrientationAllowingAmbiguous:(BOOL)a0;
+ (id)modelSpecificLocalizedStringKeyForKey:(id)a0;
+ (BOOL)_hasHomeButton;
+ (BOOL)_isWatchCompanion;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (id)_deviceInfoForKey:(struct __CFString { } *)a0;
- (void)_hardwareKeyboardAvailabilityChanged;
- (void)_unregisterForSystemSounds:(id)a0;
- (BOOL)_isSystemSoundEnabled;
- (id)_tapticEngine;
- (void)_enableDeviceOrientationEvents:(BOOL)a0;
- (void)_updateSystemSoundActiveStatus:(id)a0;
- (void)beginGeneratingDeviceOrientationNotifications;
- (void)endGeneratingDeviceOrientationNotifications;
- (void)_setHasTouchPad:(BOOL)a0;
- (void)_setExpectsFaceContactInLandscape:(BOOL)a0;
- (void)_setActiveUserInterfaceIdiom:(long long)a0;
- (float)_softwareDimmingAlpha;
- (void)_playInputSelectSound;
- (void)_playInputDeleteSound;
- (void)_setProximityState:(BOOL)a0;
- (void)_setBatteryState:(long long)a0;
- (void)_setBatteryLevel:(float)a0;
- (void)_setGraphicsQualityOverride:(long long)a0;
- (void)_clearGraphicsQualityOverride;
- (BOOL)_hasGraphicsQualityOverride;
- (long long)_predictionGraphicsQuality;
- (id)init;
- (void)_playSystemSound:(unsigned int)a0;
- (long long)_graphicsQuality;
- (long long)_keyboardGraphicsQuality;
- (BOOL)_supportsForceTouch;
- (BOOL)_hasTouchPad;
- (BOOL)_supportsDeepColor;
- (void)dealloc;
- (void)_registerForSystemSounds:(id)a0;
- (void)playInputClick;
- (long long)_nativeScreenGamut;

@end
