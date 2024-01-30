@class AFClientConfiguration, NSString, AFAccessibilityState, AFAudioPlaybackRequest;

@interface _AFClientConfigurationMutation : NSObject <AFClientConfigurationMutating> {
    AFClientConfiguration *_baseModel;
    AFAccessibilityState *_accessibilityState;
    long long _deviceRingerSwitchState;
    BOOL _isDeviceInSetupFlow;
    BOOL _isDeviceInCarDNDMode;
    BOOL _isDeviceInStarkMode;
    float _outputVolume;
    AFAudioPlaybackRequest *_tapToSiriAudioPlaybackRequest;
    AFAudioPlaybackRequest *_twoShotAudioPlaybackRequest;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasAccessibilityState : 1; unsigned char hasDeviceRingerSwitchState : 1; unsigned char hasIsDeviceInSetupFlow : 1; unsigned char hasIsDeviceInCarDNDMode : 1; unsigned char hasIsDeviceInStarkMode : 1; unsigned char hasOutputVolume : 1; unsigned char hasTapToSiriAudioPlaybackRequest : 1; unsigned char hasTwoShotAudioPlaybackRequest : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAccessibilityState:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setIsDeviceInStarkMode:(BOOL)a0;
- (void)setIsDeviceInCarDNDMode:(BOOL)a0;
- (id)generate;
- (void)setOutputVolume:(float)a0;
- (void)setIsDeviceInSetupFlow:(BOOL)a0;
- (void)setTapToSiriAudioPlaybackRequest:(id)a0;
- (void)setTwoShotAudioPlaybackRequest:(id)a0;
- (id)initWithBaseModel:(id)a0;
- (void)setDeviceRingerSwitchState:(long long)a0;

@end
