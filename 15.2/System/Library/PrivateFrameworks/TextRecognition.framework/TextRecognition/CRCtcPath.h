@class NSString;

@interface CRCtcPath : NSObject {
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } _tokenString;
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } _histWordTokenIDs;
    unsigned long long _beginningCurrentWord;
    struct vector<_NSRange, std::allocator<_NSRange>> { struct _NSRange *__begin_; struct _NSRange *__end_; struct __compressed_pair<_NSRange *, std::allocator<_NSRange>> { struct _NSRange *__value_; } __end_cap_; } _whitespaceRanges;
    unsigned long long _numCustomWords;
}

@property (retain) NSString *string;
@property double probBlank;
@property double probNonBlank;
@property double probLexHist;
@property double probLexCurrWord;
@property double probCharNGram;
@property double probWM;
@property (readonly) double probTotal;
@property (readonly) double probLM;
@property (readonly) double probTotalNorm;
@property (nonatomic) struct _LXCursor { } *lxStaticCursor;
@property (nonatomic) struct _LXCursor { } *lxDynamicCursor;

+ (id)_getQueue;
+ (void)updateWMProbForPath:(id)a0 stemmingFromPath:(id)a1 wordModel:(void *)a2 locale:(id)a3 forChar:(unsigned short)a4;
+ (void)updateNGramProbForPath:(id)a0 stemmingFromPath:(id)a1 withModel:(void *)a2 forChar:(unsigned short)a3;
+ (void)updateLexiconProbForPath:(id)a0 stemmingFromPath:(id)a1 staticLexicon:(struct _LXLexicon { } *)a2 dynamicLexicon:(struct _LXLexicon { } *)a3 forChar:(unsigned short)a4;
+ (BOOL)_isWordCustom:(id)a0 dynamicLexicon:(struct _LXLexicon { } *)a1;
+ (void)useLMTokenizerOnString:(id)a0 outTokenIDs:(id *)a1 outTokenRanges:(id *)a2 wordModel:(void *)a3 locale:(id)a4;
+ (double)lmProbForString:(id)a0 forPath:(id)a1 originalWordRanges:(id)a2 originalWordIDs:(id)a3 wordRanges:(id)a4 wordIDs:(id)a5 wordModel:(void *)a6;
+ (unsigned int)normalizeLMTokenIDForWord:(id)a0 withTokenID:(unsigned int)a1 outScore:(double *)a2 wordModel:(void *)a3;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (id)whiteSpaceRangesExcludingTrailing;
- (void)merge:(id)a0 replaceWhiteSpaces:(BOOL)a1;
- (id)childPathWithBlankProb:(double)a0;
- (void)updateWhitespacesForTimeSample:(unsigned long long)a0;
- (id)pathByExtendingWithCharacter:(unsigned short)a0 characterNGramModel:(void *)a1 staticLexicon:(struct _LXLexicon { } *)a2 dynamicLexicon:(struct _LXLexicon { } *)a3 wordModel:(void *)a4 locale:(id)a5 forTimeSample:(unsigned long long)a6;
- (BOOL)containsCustomWords:(struct _LXLexicon { } *)a0;

@end
