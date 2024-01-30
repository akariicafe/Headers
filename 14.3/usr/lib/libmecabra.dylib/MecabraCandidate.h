@class NSString, NSDictionary;

@interface MecabraCandidate : NSObject <NSCopying> {
    void *_rawCandidate;
}

@property (readonly, nonatomic) struct MecabraCandidateBase { void /* function */ **x0; long long x1; } *rawCandidate;
@property (readonly, nonatomic) struct ConversionCandidate { void /* function */ **x0; long long x1; } *rawConversionCandidate;
@property (readonly, nonatomic) BOOL isConversionCandidate;
@property (readonly, nonatomic) BOOL isSyntheticCandidate;
@property (readonly, nonatomic) BOOL isExtensionCandidate;
@property (readonly, nonatomic) BOOL isExtensionForCandidateBar;
@property (readonly, nonatomic) BOOL isEmojiCandidate;
@property (readonly, nonatomic) BOOL isPersonName;
@property (readonly, nonatomic) BOOL isLearningDictionaryCandidate;
@property (readonly, nonatomic) BOOL isUserWordCandidate;
@property (readonly, nonatomic) BOOL isPredictionCandidate;
@property (readonly, nonatomic) BOOL isFuzzyMatchCandidate;
@property (readonly, nonatomic) BOOL isAutocorrectedCandidate;
@property (readonly, nonatomic) BOOL isOTAWordlistCandidate;
@property (readonly, nonatomic) BOOL isRegionalCandidate;
@property (readonly, nonatomic) BOOL isBilingualCandidate;
@property (readonly, nonatomic) BOOL isPartialCandidate;
@property (readonly, nonatomic) BOOL isAbbreviated;
@property (readonly, nonatomic) BOOL isWubixingConvertedByPinyin;
@property (readonly, nonatomic) unsigned long long wubixingType;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) unsigned long long wordCount;
@property (readonly, nonatomic) NSString *surface;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *analysisString;
@property (readonly, nonatomic) NSString *convertedAnalysisString;
@property (readonly, nonatomic) NSString *dictionaryReading;
@property (readonly, nonatomic) NSDictionary *attributes;

+ (id)syntheticCandidateFromWords:(id)a0 withLexicon:(struct Lexicon { void *x0; void *x1; } *)a1 language:(int)a2;

- (id)words;
- (unsigned short)kind;
- (void)setWeight:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCandidate:(struct MecabraCandidateBase { void /* function */ **x0; long long x1; } *)a0;
- (BOOL)setDisplayString:(struct __CFString { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (long long)weight;
- (id)wordIDs;
- (unsigned short)matchType;
- (long long)phraseBoundaryAfterWordAtIndex:(long long)a0;
- (unsigned short)wordLengthAtIndex:(unsigned long long)a0;
- (unsigned short)wordReadingLengthAtIndex:(unsigned long long)a0;
- (unsigned short)wordDictionaryReadingLengthAtIndex:(unsigned long long)a0;
- (BOOL)wordIsFromSystemDictionaryAtIndex:(unsigned long long)a0;
- (struct __CFArray { } *)copySyllableLengthArrayForWordAtIndex:(unsigned long long)a0;
- (unsigned short)lcAttrAtIndex:(unsigned long long)a0;
- (unsigned short)rcAttrAtIndex:(unsigned long long)a0;
- (unsigned long long)trieValueAtIndex:(unsigned long long)a0;
- (unsigned short)kindAtIndex:(unsigned long long)a0;
- (long long)costAtIndex:(unsigned long long)a0;
- (unsigned short)lastPrefixValue;
- (unsigned short)matchedLengthType;
- (double)lmProbability;
- (long long)baseCost;
- (long long)matchPenalty;
- (struct __CFArray { } *)copySyllableLengthArrayInAnalysisString;
- (struct __CFArray { } *)copySyllableLengthArrayInConvertedAnalysisString;
- (struct __CFArray { } *)copySyllableLengthArrayInDictionaryReading;
- (struct { long long x0; long long x1; })wordRangeAtIndex:(long long)a0;
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
