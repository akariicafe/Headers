@class CHPatternNetwork;

@interface CHRemoveSpacesFromStrongURLsAndEmailsStep : CHPostprocessingStepModifyingOriginalTokens

@property (retain, nonatomic) CHPatternNetwork *patternFST;

- (void).cxx_destruct;
- (id)initWithPatternFst:(id)a0;
- (id)process:(id)a0 options:(id)a1;

@end
