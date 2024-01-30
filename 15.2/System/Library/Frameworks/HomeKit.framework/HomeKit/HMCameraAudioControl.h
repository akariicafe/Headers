@class HMCharacteristic, _HMCameraAudioControl;

@interface HMCameraAudioControl : HMCameraControl

@property (retain, nonatomic) _HMCameraAudioControl *audioControl;
@property (readonly, nonatomic) HMCharacteristic *mute;
@property (readonly, nonatomic) HMCharacteristic *volume;

- (void).cxx_destruct;
- (id)initWithAudioControl:(id)a0;

@end
