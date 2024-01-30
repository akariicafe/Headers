@interface CHCandidateRefinementStep : CHPostprocessingStep

@property (nonatomic) BOOL shouldKeepOutOfPatternCandidates;
@property (nonatomic) BOOL shouldKeepDuplicateTokenIDs;
@property (nonatomic) BOOL shouldKeepOutOfLexiconAlternatives;
@property (nonatomic) BOOL shouldKeepAlternativeLengths;
@property (nonatomic) BOOL shouldKeepSubstrings;
@property (nonatomic) BOOL shouldKeepOriginalSpelling;

- (id)initWithShouldKeepOutOfPatternCandidates:(BOOL)a0 shouldKeepDuplicateTokenIDs:(BOOL)a1 shouldKeepOutOfLexiconAlternatives:(BOOL)a2 shouldKeepAlternativeLengths:(BOOL)a3 shouldKeepSubstrings:(BOOL)a4 shouldKeepOriginalSpelling:(BOOL)a5;
- (id)process:(id)a0 options:(id)a1;

@end
