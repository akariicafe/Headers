@class PHASENumberMetaParameterDefinition;

@interface PHASEWaterProcedureNodeDefinition : PHASEProcedureNodeDefinition

@property (nonatomic) double fallRate;
@property (nonatomic) double averageDropDiameter;
@property (nonatomic) double maxDropDiameter;
@property (nonatomic) double impulseShape;
@property (nonatomic) double impulseGainExponent;
@property (nonatomic) double impulseGain;
@property (nonatomic) double chirpRiseRate;
@property (nonatomic) double baseFrequencyMultiplier;
@property (nonatomic) double bubbleGain;
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *fallRateMetaParameterDefinition;
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *averageDropDiameterMetaParameterDefinition;
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *maxDropDiameterMetaParameterDefinition;
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *impulseShapeMetaParameterDefinition;
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *impulseGainExponentMetaParameterDefinition;
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *impulseGainMetaParameterDefinition;
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *chirpRiseRateMetaParameterDefinition;
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *baseFrequencyMultiplierMetaParameterDefinition;
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *bubbleGainMetaParameterDefinition;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMixerDefinition:(id)a0 maxPolyphony:(int)a1 voiceStealingType:(long long)a2;
- (id)initWithMixerDefinition:(id)a0 maxPolyphony:(int)a1 voiceStealingType:(long long)a2 identifier:(id)a3;
- (id)initWithMixerDefinition:(id)a0 referenceGainDbSpl:(double)a1 maxPolyphony:(int)a2 voiceStealingType:(long long)a3;
- (id)initWithMixerDefinition:(id)a0 referenceGainDbSpl:(double)a1 maxPolyphony:(int)a2 voiceStealingType:(long long)a3 uid:(id)a4;

@end
