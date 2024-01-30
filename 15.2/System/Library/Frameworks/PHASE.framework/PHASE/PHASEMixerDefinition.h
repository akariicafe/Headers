@class PHASENumberMetaParameterDefinition;

@interface PHASEMixerDefinition : PHASEDefinition

@property (nonatomic) double gain;
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *gainMetaParameterDefinition;

+ (id)new;

- (id)initInternal;
- (void).cxx_destruct;
- (id)init;

@end
