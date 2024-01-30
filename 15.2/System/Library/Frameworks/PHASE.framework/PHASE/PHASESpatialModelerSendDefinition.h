@class NSMutableDictionary, PHASENumberMetaParameterDefinition;

@interface PHASESpatialModelerSendDefinition : PHASEDefinition

@property (retain, nonatomic) NSMutableDictionary *tweakParams;
@property (readonly, nonatomic) long long spatialModelerType;
@property (nonatomic) double sendLevel;
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *sendMetaParameterDefinition;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSpatialModelerType:(long long)a0;
- (void)setTweakParameterWithValue:(double)a0 uid:(id)a1;
- (void)setTweakParameterWithMetaParameterDefinition:(id)a0 uid:(id)a1;
- (id)initWithSpatialModelerType:(long long)a0 uid:(id)a1;

@end
