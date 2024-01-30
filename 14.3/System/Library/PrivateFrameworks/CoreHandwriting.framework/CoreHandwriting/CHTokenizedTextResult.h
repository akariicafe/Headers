@class NSString, NSArray;

@interface CHTokenizedTextResult : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSArray *_tokenColumns;
    long long _recognizerGenerationIdentifier;
    long long _precedingLineBreaks;
    long long _changeableCount;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long tokenColumnCount;
@property (readonly, nonatomic) long long changeableTokenColumnCount;
@property (readonly, copy, nonatomic) NSString *trailingSeparator;
@property (readonly, copy, nonatomic) NSArray *transcriptionPaths;
@property (readonly, copy, nonatomic) NSArray *transcriptionPathScores;
@property (readonly, copy, nonatomic) NSString *topTranscription;
@property (readonly, nonatomic) NSString *recognizerDebugDescription;

+ (id)extendedToken:(id)a0 withStrokeIndexSet:(id)a1 alignmentScore:(double)a2;
+ (id)tokenizedTextResultWithString:(id)a0 strokeIndexes:(id)a1 trailingSeparator:(id)a2 recognizerGenerationIdentifier:(long long)a3;
+ (long long)mergeTokenRow:(id)a0 intoUniqueRows:(id)a1;
+ (struct pair<double, double> { double x0; double x1; })_scoreMeanAndStdForToken:(id)a0 forLocale:(id)a1;
+ (long long)_characterCountInToken:(id)a0 filteringCharacterSet:(id)a1 filteredCharacterCount:(long long *)a2;
+ (BOOL)areTokenRowsEquivalent:(id)a0 otherRow:(id)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isValid;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)strokeIndexesForColumnsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)tokenRowsAtColumnIndex:(long long)a0;
- (id)precedingSeparatorForToken:(id)a0;
- (id)tokensInTranscriptionPath:(id)a0 atColumnIndex:(long long)a1;
- (void)enumerateTokensInTranscriptionPath:(id)a0 columnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tokenProcessingBlock:(id /* block */)a2;
- (id)transcriptionWithPath:(id)a0 columnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 filterLowConfidence:(BOOL)a2 excludeGibberish:(BOOL)a3 rejectionRate:(double *)a4 tokenProcessingBlock:(id /* block */)a5;
- (id)initWithTokenColumns:(id)a0 transcriptionPaths:(id)a1 scores:(id)a2 recognizerGenerationIdentifier:(long long)a3;
- (id)tokenColumns;
- (long long)recognizerGenerationIdentifier;
- (id)initWithBestPathTokens:(id)a0 pathProbabilities:(id)a1 trailingSeparator:(id)a2 recognizerGenerationIdentifier:(long long)a3;
- (id)initWithTokenColumns:(id)a0 transcriptionPaths:(id)a1 scores:(id)a2 trailingSeparator:(id)a3 recognizerGenerationIdentifier:(long long)a4;
- (id)legacyTextRecognitionResults;
- (id)transcriptionWithPath:(id)a0 columnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 filterLowConfidence:(BOOL)a2;
- (id)tokenAtLocation:(struct { long long x0; long long x1; long long x2; })a0;
- (id)initWithTokenColumns:(id)a0 transcriptionPaths:(id)a1 scores:(id)a2 trailingSeparator:(id)a3 recognizerGenerationIdentifier:(long long)a4 changeableColumnCount:(long long)a5;
- (id)initWithBestPathTokens:(id)a0 pathProbabilities:(id)a1 trailingSeparator:(id)a2 recognizerGenerationIdentifier:(long long)a3 changeableColumnCount:(long long)a4;
- (BOOL)shouldFilterOutStringForToken:(id)a0 isGibberish:(BOOL *)a1;
- (BOOL)_isGibberishToken:(id)a0;
- (long long)precedingLineBreaks;
- (double)languageFitnessForTranscriptionPath:(id)a0 locale:(id)a1 recognitionMode:(int)a2;
- (long long)_tokenCountInTranscriptionPath:(id)a0 columnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (double)_normalizedLanguageFitness:(double)a0;
- (id)_legacyTextRecognitionResultForTranscriptionIndex:(long long)a0;
- (BOOL)isEqualToTokenizedTextResult:(id)a0;
- (id)precedingSeparatorForTopTranscriptionPath;
- (id)tokensFromTopTranscriptionWithCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)tokenizedResultWithFilteredPaths:(double)a0;
- (double)languageFitnessForLocale:(id)a0 recognitionMode:(int)a1;
- (id)phraseCaseCorrectedResultWithHistory:(id)a0 phraseLexicon:(struct _LXLexicon { } *)a1 maxPhraseLength:(long long)a2;

@end
