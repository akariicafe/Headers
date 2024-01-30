@class CHPatternNetwork;

@interface CHRemoveSpacesFromSpecialFieldsStep : CHPostprocessingStepModifyingOriginalTokens

@property (retain, nonatomic) CHPatternNetwork *patternFST;
@property (nonatomic) long long patternType;
@property (nonatomic) BOOL capitalizationToSplit;
@property (nonatomic) BOOL convertToLowercase;

- (void).cxx_destruct;
- (id)initWithPatternFst:(id)a0 patternType:(long long)a1 capitalizationToSplit:(BOOL)a2 convertToLowercase:(BOOL)a3;
- (id)process:(id)a0 options:(id)a1;

@end
