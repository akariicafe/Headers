@class NSString, NSArray, NSIndexSet;

@interface CHTextRecognitionResult : CHRecognitionResult

@property (readonly) NSString *string;
@property (readonly) NSArray *wordRanges;
@property (readonly) NSArray *wordIDs;
@property (readonly) NSArray *wordRecognitionScores;
@property (readonly) NSArray *wordCombinedScores;
@property (readonly) NSArray *wordStrokeSets;
@property (readonly) NSArray *wordLexicalEntries;
@property (readonly) NSArray *wordPatternEntries;
@property (readonly) NSIndexSet *rareWordIndexes;
@property (readonly) NSIndexSet *inappropriateWordIndexes;
@property (readonly) BOOL isTextReplacement;

- (void).cxx_destruct;
- (id)mecabraCandidate;
- (id)initWithString:(id)a0 score:(double)a1 wordRanges:(id)a2 wordIDs:(id)a3 wordRecognitionScores:(id)a4 wordCombinedScores:(id)a5 wordStrokeSets:(id)a6 wordLexicalEntries:(id)a7 wordPatternEntries:(id)a8 rareWordIndexes:(id)a9 inappropriateWordIndexes:(id)a10 isTextReplacement:(BOOL)a11;

@end
