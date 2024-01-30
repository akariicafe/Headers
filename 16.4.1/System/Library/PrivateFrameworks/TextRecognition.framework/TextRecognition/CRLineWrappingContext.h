@class NSString, CRLineWrappingClassifier, CRLanguageResourcesManager, CRTextFeature, NSMutableArray, NSArray;

@interface CRLineWrappingContext : NSObject {
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } _contextTokens;
}

@property (retain) NSMutableArray *results;
@property (retain) NSString *text;
@property (retain) CRLanguageResourcesManager *lrManager;
@property unsigned long long contextSize;
@property unsigned long long lineCount;
@property BOOL active;
@property double lineHeightSum;
@property long long verticalSpacingSumCount;
@property double verticalSpacingSum;
@property (readonly) CRLineWrappingClassifier *classifier;
@property (readonly) NSString *locale;
@property (readonly) CRTextFeature *lastFeature;
@property (readonly) BOOL usesWordTokens;
@property (readonly) BOOL shouldConsiderLetterCase;
@property (readonly) NSArray *contextResults;
@property (readonly) double averageVerticalSpacing;
@property (readonly) double averageLineHeight;

+ (BOOL)_usesWordTokensForLocale:(id)a0;

- (id).cxx_construct;
- (void)dealloc;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (void)resetContext;
- (void)addResult:(id)a0;
- (double)charLMScoreByAddingString:(id)a0 eosScore:(double *)a1;
- (BOOL)classifierShouldCorrectOverwrappingWithEvaluation:(long long)a0 correctionMode:(long long)a1;
- (BOOL)classifierShouldInsertLineBreakForEvaluationResult:(id)a0 threshold:(float)a1;
- (struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x0; unsigned int *x1; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x0; } x2; })contextByAddingNewTokens:(const void *)a0;
- (BOOL)isClassifierAvailable;
- (BOOL)isValidWordString:(id)a0;
- (void)startWithResult:(id)a0 contextSize:(long long)a1;
- (struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x0; unsigned int *x1; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x0; } x2; })tokenizeStringIntoWords:(id)a0;
- (double)wordLMScoreByAddingToken:(unsigned int)a0;
- (double)wordLMScoreByAddingTokens:(const void *)a0;

@end
