@interface MecabraCandidate : NSObject <NSCopying> {
    void *_rawCandidate;
}

@property (readonly, nonatomic) void *rawCandidate;

+ (id)syntheticCandidateFromWords:(id)a0 withLexicon:(struct Lexicon { void *x0; void *x1; } *)a1 language:(int)a2;

- (id)surface;
- (id)words;
- (id)string;
- (id)category;
- (id)description;
- (id)initWithCandidate:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)wordIDs;
- (void)dealloc;
- (id)attributes;
- (id)analysisString;
- (id)convertedAnalysisString;
- (id)dictionaryReading;
- (id)syllablesInAnalysisString;
- (id)syllablesInConvertedAnalysisString;
- (id)syllablesInDictionaryReading;
- (id)syllablesInString:(id)a0 syllableLengths:(id)a1;
- (id)convertedAnalysisStringForFirstSyllable;
- (id)syllabifiedAnalysisString;
- (id)syllabifiedConvertedAnalysisString;
- (id)syllabifiedDictionaryReading;
- (id)wordReadings;

@end
