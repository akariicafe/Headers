@class CHRecognizer;

@interface CHCandidateRefinementStep : CHPostprocessingStep

@property (nonatomic) CHRecognizer *recognizer;
@property (nonatomic) BOOL shouldKeepOutOfPatternCandidates;
@property (nonatomic) BOOL shouldKeepDuplicateTokenIDs;
@property (nonatomic) BOOL shouldKeepOutOfLexiconAlternatives;
@property (nonatomic) BOOL shouldKeepAlternativeLengths;
@property (nonatomic) BOOL shouldKeepSubstrings;
@property (nonatomic) BOOL shouldKeepOriginalSpelling;

- (id)process:(id)a0;
- (id)initWithRecognizer:(id)a0 shouldKeepOutOfPatternCandidates:(BOOL)a1 shouldKeepDuplicateTokenIDs:(BOOL)a2 shouldKeepOutOfLexiconAlternatives:(BOOL)a3 shouldKeepAlternativeLengths:(BOOL)a4 shouldKeepSubstrings:(BOOL)a5 shouldKeepOriginalSpelling:(BOOL)a6;

@end
