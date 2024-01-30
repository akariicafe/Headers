@class CHPatternNetwork;

@interface CHRemoveSpacesFromSpecialFieldsStep : CHPostprocessingStep

@property (retain, nonatomic) CHPatternNetwork *patternFST;
@property (nonatomic) long long patternType;
@property (nonatomic) BOOL capitalizationToSplit;
@property (nonatomic) BOOL convertToLowercase;

- (void)dealloc;
- (id)process:(id)a0;
- (id)initWithPatternFst:(id)a0 patternType:(long long)a1 capitalizationToSplit:(BOOL)a2 convertToLowercase:(BOOL)a3;

@end
