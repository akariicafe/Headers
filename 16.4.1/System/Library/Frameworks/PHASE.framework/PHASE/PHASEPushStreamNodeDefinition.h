@class AVAudioFormat;

@interface PHASEPushStreamNodeDefinition : PHASEGeneratorNodeDefinition

@property (nonatomic) double referenceGainDbSpl;
@property (readonly, nonatomic) AVAudioFormat *format;
@property (nonatomic) BOOL normalize;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMixerDefinition:(id)a0 format:(id)a1;
- (id)initWithMixerDefinition:(id)a0 format:(id)a1 identifier:(id)a2;
- (id)initWithMixerDefinition:(id)a0 format:(id)a1 uid:(id)a2;

@end
