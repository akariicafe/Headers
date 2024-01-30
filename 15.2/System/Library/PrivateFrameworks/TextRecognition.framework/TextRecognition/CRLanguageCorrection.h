@class NSString, NSLocale, NSCharacterSet, CRCHPatternNetwork;

@interface CRLanguageCorrection : NSObject

@property (nonatomic) void *characterLanguageModel;
@property (nonatomic) struct _LXLexicon { } *staticLexicon;
@property (nonatomic) struct _LXLexicon { } *dynamicLexicon;
@property (retain, nonatomic) NSString *invalidSingleCharCNNCode;
@property (retain, nonatomic) CRCHPatternNetwork *patternFST;
@property (readonly) NSCharacterSet *confusableCharacters;
@property (readonly) NSLocale *locale;

+ (id)supportedLanguagesForRevision:(unsigned long long)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isLanguageCorrectionSupportedForLanguage:(id)a0 revision:(unsigned long long)a1;
- (void)loadCharacterNgramModel:(id)a0;
- (struct _LXLexicon { } *)newDynamicLexiconForLocale:(id)a0 error:(id *)a1;
- (void)adjustCaseConfusions:(id)a0;
- (id)findBestPathsForTextResults:(id)a0 numPathsToExtract:(unsigned long long)a1 ngramsize:(unsigned long long)a2;
- (BOOL)preferAllUppercase:(id)a0;
- (BOOL)preferAllLowercase:(id)a0;
- (id)initWithRevision:(unsigned long long)a0 localeCode:(id)a1 customWords:(id)a2;
- (id)correctTextFeature:(id)a0 inImage:(id)a1 withTextPieces:(id)a2 withMaxWidthPerRegion:(double)a3 withMedianCharSpacing:(double)a4 withBreakpoints:(const void *)a5 segmenter:(void *)a6 options:(id)a7 numCharCandidates:(int)a8 downscaleSpaceRatio:(BOOL)a9 latticePresetIdx:(int)a10 latticeResults:(id)a11;

@end
