@class NSString;

@interface HMDHAPMediaProfile : HMDMediaProfile

@property long long airPlayEnable;
@property (readonly) NSString *clientIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)capability;
- (void)registerForNotifications;
- (void)handlePrimaryResidentChanged:(id)a0;
- (void)handleAccessoryConnected:(id)a0;
- (BOOL)_updatePlayback:(id)a0;
- (BOOL)_updateRefreshPlayback:(id)a0;
- (void)_handleCharacteristicChanges:(id)a0;
- (void)handleHomeCharacteristicValuesChanged:(id)a0;
- (void)_notifyProfileSettingsUpdated:(id)a0;
- (void)setEnable:(long long)a0 completionHandler:(id /* block */)a1;
- (void)handleCharacteristicsUpdated:(id)a0;
- (BOOL)_updateAudioControl:(id)a0;
- (id)initWithMediaServices:(id)a0;
- (id)_smartSpeakerService;
- (id)_smartSpeakerTargetMediaStateCharacteristic;
- (id)playStateWriteRequestWithPlaybackState:(long long)a0;
- (id)_smartSpeakerTargetMediaStateWriteRequestWithPlaybackState:(id)a0;
- (id)_smartSpeakerCurrentMediaStateCharacteristic;
- (id)_smartSpeakerCurrentMediaStateReadRequest;
- (id)_smartSpeakerVolumeCharacteristic;
- (id)_smartSpeakerVolumeReadRequest;
- (id)volumeWriteRequestWithVolumePercentage:(id)a0;
- (id)_smartSpeakerVolumeWriteRequestWithVolumePercentage:(id)a0;
- (id)_smartSpeakerMutedCharacteristic;
- (id)_smartSpeakerMutedReadRequest;
- (id)_smartSpeakerMutedWriteRequestWithMuted:(id)a0;
- (id)_smartSpeakerAirPlayEnableCharacteristic;
- (id)_smartSpeakerAirPlayEnableReadRequest;
- (id)_mediaSessionStateFromProfile;
- (void)_updateCharacteristicChanges;
- (id)_allCharacteristicsToMonitor;
- (void)_setCharacteristicNotifications:(BOOL)a0;
- (void)_disableCharacteristicNotifications;
- (void)handleResidentAdded:(id)a0;
- (void)_updateCurrentMediaState:(id)a0 volumePercentage:(id)a1 muted:(id)a2 enable:(id)a3 message:(id)a4;

@end
