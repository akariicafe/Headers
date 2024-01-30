@class NSMutableDictionary, PHASENumberMetaParameterDefinition;

@interface PHASESpatialModelerSendDefinition : PHASEDefinition

@property (retain, nonatomic) NSMutableDictionary *tweakParams;
@property (readonly, nonatomic) long long spatialModelerType;
@property (nonatomic) double sendLevel;
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *sendMetaParameterDefinition;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSpatialModelerType:(long long)a0 uid:(id)a1;
- (void)setTweakParameterWithValue:(double)a0 uid:(id)a1;
- (id)initWithSpatialModelerType:(long long)a0;
- (void)setTweakParameterWithMetaParameterDefinition:(id)a0 uid:(id)a1;

@end
