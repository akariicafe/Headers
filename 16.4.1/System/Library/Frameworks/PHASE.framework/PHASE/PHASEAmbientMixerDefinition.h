@class AVAudioChannelLayout;

@interface PHASEAmbientMixerDefinition : PHASEMixerDefinition

@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ vector; } orientation;
@property (readonly, nonatomic) AVAudioChannelLayout *inputChannelLayout;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithChannelLayout:(id)a0 orientation:(struct { })a1;
- (id)initWithChannelLayout:(id)a0 orientation:(struct { })a1 identifier:(id)a2;
- (id)initWithChannelLayout:(id)a0 orientation:(struct { })a1 uid:(id)a2;

@end
