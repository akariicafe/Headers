@class NSString;

@interface AVAudioMixerNode : AVAudioNode <AVAudioMixing>

@property (nonatomic) float outputVolume;
@property (readonly, nonatomic) unsigned long long nextAvailableInputBus;
@property (nonatomic) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)inputConnected:(unsigned long long)a0;
- (void)setInputVolume:(float)a0 bus:(unsigned long long)a1;
- (void)setInputPan:(float)a0 bus:(unsigned long long)a1;
- (void)didAttachToEngine:(id)a0;

@end
