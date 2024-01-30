@class AVAudioChannelLayout;

@interface PHASEChannelMixerDefinition : PHASEMixerDefinition

@property (readonly, nonatomic) AVAudioChannelLayout *inputChannelLayout;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithChannelLayout:(id)a0 mode:(long long)a1;
- (id)initWithChannelLayout:(id)a0;
- (id)initWithChannelLayout:(id)a0 identifier:(id)a1;
- (id)initWithChannelLayout:(id)a0 mode:(long long)a1 uid:(id)a2;
- (id)initWithChannelLayout:(id)a0 uid:(id)a1;

@end
