@class AVAudioEnvironmentReverbParameters, NSArray, AVAudioEnvironmentDistanceAttenuationParameters, NSString;

@interface AVAudioEnvironmentNode : AVAudioNode <AVAudioMixing>

@property (nonatomic) long long outputType;
@property (nonatomic) float outputVolume;
@property (readonly, nonatomic) unsigned long long nextAvailableInputBus;
@property (nonatomic) struct AVAudio3DPoint { float x0; float x1; float x2; } listenerPosition;
@property (nonatomic) struct AVAudio3DVectorOrientation { struct AVAudio3DPoint { float x0; float x1; float x2; } x0; struct AVAudio3DPoint { float x0; float x1; float x2; } x1; } listenerVectorOrientation;
@property (nonatomic) struct AVAudio3DAngularOrientation { float x0; float x1; float x2; } listenerAngularOrientation;
@property (readonly, nonatomic) AVAudioEnvironmentDistanceAttenuationParameters *distanceAttenuationParameters;
@property (readonly, nonatomic) AVAudioEnvironmentReverbParameters *reverbParameters;
@property (readonly, nonatomic) NSArray *applicableRenderingAlgorithms;
@property (nonatomic) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;

@end
