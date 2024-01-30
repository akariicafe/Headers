@interface HMDHAPMediaProfile : HMDMediaProfile

+ (BOOL)supportsSecureCoding;

- (void)registerForNotifications;
- (unsigned long long)capability;
- (void)encodeWithCoder:(id)a0;
- (void)handleAccessoryConnected:(id)a0;
- (BOOL)_updatePlayback:(id)a0;
- (BOOL)_updateRefreshPlayback:(id)a0;
- (void)handleCharacteristicsUpdated:(id)a0;
- (void)_handleCharacteristicChanges:(id)a0;
- (BOOL)_updateAudioControl:(id)a0;
- (void)handleHomeCharacteristicValuesChanged:(id)a0;
- (id)_smartSpeakerService;
- (id)_smartSpeakerTargetMediaStateWriteRequestWithPlaybackState:(id)a0;
- (id)_smartSpeakerTargetMediaStateCharacteristic;
- (id)_smartSpeakerCurrentMediaStateCharacteristic;
- (id)_smartSpeakerVolumeCharacteristic;
- (id)_smartSpeakerVolumeWriteRequestWithVolumePercentage:(id)a0;
- (id)_smartSpeakerMutedCharacteristic;
- (id)_smartSpeakerCurrentMediaStateReadRequest;
- (id)_smartSpeakerVolumeReadRequest;
- (id)_smartSpeakerMutedReadRequest;
- (void)_updateCurrentMediaState:(id)a0 volumePercentage:(id)a1 muted:(id)a2 message:(id)a3;
- (void)_updateCharacteristicChanges;
- (id)_smartSpeakerMutedWriteRequestWithMuted:(id)a0;
- (id)_mediaSessionStateFromProfile;
- (id)initWithMediaServices:(id)a0;
- (id)playStateWriteRequestWithPlaybackState:(long long)a0;
- (id)volumeWriteRequestWithVolumePercentage:(id)a0;

@end
