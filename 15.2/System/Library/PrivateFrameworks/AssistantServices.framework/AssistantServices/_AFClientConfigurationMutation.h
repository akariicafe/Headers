@class AFClientConfiguration, NSString, AFAccessibilityState, NSDate, AFAudioPlaybackRequest;

@interface _AFClientConfigurationMutation : NSObject <AFClientConfigurationMutating> {
    AFClientConfiguration *_baseModel;
    AFAccessibilityState *_accessibilityState;
    long long _deviceRingerSwitchState;
    BOOL _isDeviceInCarDNDMode;
    BOOL _isDeviceInStarkMode;
    BOOL _isDeviceWatchAuthenticated;
    BOOL _areAnnouncementRequestsPermittedByPresentationWhileActive;
    float _outputVolume;
    AFAudioPlaybackRequest *_tapToSiriAudioPlaybackRequest;
    AFAudioPlaybackRequest *_twoShotAudioPlaybackRequest;
    NSDate *_deviceSetupFlowBeginDate;
    NSDate *_deviceSetupFlowEndDate;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasAccessibilityState : 1; unsigned char hasDeviceRingerSwitchState : 1; unsigned char hasIsDeviceInCarDNDMode : 1; unsigned char hasIsDeviceInStarkMode : 1; unsigned char hasIsDeviceWatchAuthenticated : 1; unsigned char hasAreAnnouncementRequestsPermittedByPresentationWhileActive : 1; unsigned char hasOutputVolume : 1; unsigned char hasTapToSiriAudioPlaybackRequest : 1; unsigned char hasTwoShotAudioPlaybackRequest : 1; unsigned char hasDeviceSetupFlowBeginDate : 1; unsigned char hasDeviceSetupFlowEndDate : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void)setTapToSiriAudioPlaybackRequest:(id)a0;
- (void)setTwoShotAudioPlaybackRequest:(id)a0;
- (void)setDeviceSetupFlowBeginDate:(id)a0;
- (void)setDeviceSetupFlowEndDate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setDeviceRingerSwitchState:(long long)a0;
- (void)setAccessibilityState:(id)a0;
- (void)setIsDeviceInStarkMode:(BOOL)a0;
- (void)setIsDeviceInCarDNDMode:(BOOL)a0;
- (void)setAreAnnouncementRequestsPermittedByPresentationWhileActive:(BOOL)a0;
- (void)setIsDeviceWatchAuthenticated:(BOOL)a0;
- (void)setOutputVolume:(float)a0;

@end
