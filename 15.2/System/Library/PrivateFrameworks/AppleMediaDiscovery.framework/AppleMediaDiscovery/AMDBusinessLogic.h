@class ModifierDefinition, NSMutableArray;

@interface AMDBusinessLogic : NSObject

@property (retain, nonatomic) NSMutableArray *modifierDefinitions;
@property (retain, nonatomic) ModifierDefinition *rankerDefintion;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)applyBusinessRulesOnCandidates:(id)a0 forUseCase:(id)a1 usingFeatureProvider:(id)a2 topN:(unsigned long long)a3;

@end
