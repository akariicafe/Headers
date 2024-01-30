@class CHPatternNetwork;

@interface CHRemoveSpacesFromStrongURLsAndEmailsStep : CHPostprocessingStep

@property (retain, nonatomic) CHPatternNetwork *patternFST;

- (void)dealloc;
- (id)process:(id)a0;
- (id)initWithPatternFst:(id)a0;

@end
