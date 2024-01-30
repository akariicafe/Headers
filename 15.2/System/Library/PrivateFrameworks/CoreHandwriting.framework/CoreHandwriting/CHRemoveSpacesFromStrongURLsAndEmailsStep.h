@class CHPatternNetwork;

@interface CHRemoveSpacesFromStrongURLsAndEmailsStep : CHPostprocessingStep

@property (retain, nonatomic) CHPatternNetwork *patternFST;

- (id)process:(id)a0;
- (void)dealloc;
- (id)initWithPatternFst:(id)a0;

@end
