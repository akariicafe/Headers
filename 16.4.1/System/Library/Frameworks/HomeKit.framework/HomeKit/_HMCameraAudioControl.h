@class HMCharacteristic;

@interface _HMCameraAudioControl : _HMCameraControl

@property (readonly, nonatomic) HMCharacteristic *mute;
@property (readonly, nonatomic) HMCharacteristic *volume;

- (void).cxx_destruct;
- (id)initWithCameraProfile:(id)a0 profileUniqueIdentifier:(id)a1 service:(id)a2;

@end
