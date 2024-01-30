@class CVNLPLexiconCursors, CVNLPLanguageResourceBundle, NSString;

@interface CVNLPCTCTextDecodingPath : CVNLPTextDecodingPath {
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } _tokenString;
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } _histWordTokenIDs;
    unsigned long long _beginningCurrentWord;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _cumulativeTokenLogProbabilities;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _tokenBoundaryLogProbabilities;
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } _tokenStringSegmentationPositions;
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } _tokenMaxActivations;
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } _tokenCommitCharacterLengths;
    BOOL _hasContext;
    double _normalizedTotalLogProbability;
    NSString *_latestExpandedSymbolIncludingPseudospace;
    BOOL _hasExpanded;
    BOOL _hasProblematicMixedScriptWords;
    BOOL _hasCalculatedHasProblematicMixedScriptWords;
    int _lastCodeUnitType;
}

@property double blankLogProbability;
@property double nonBlankLogProbability;
@property double historyLexiconLogProbability;
@property double activeWordLexiconLogProbability;
@property (readonly) double normalizedActivationLogProbability;
@property (readonly) double languageResourceLogProbability;
@property (readonly) double normalizedTotalLogProbability;
@property double lastTokenBoundaryLogProbability;
@property (readonly) BOOL optimizingAlignment;
@property (retain, nonatomic) CVNLPLexiconCursors *cursors;
@property (nonatomic) struct CVNLPLanguageModelWithState { } *characterLMState;
@property (readonly, retain, nonatomic) CVNLPLanguageResourceBundle *languageResourceBundle;
@property (readonly, nonatomic) NSString *latestExpandedSymbolIncludingPseudospace;
@property (readonly, nonatomic) NSString *latestExpandedSymbol;
@property (readonly, nonatomic) BOOL hasExpanded;
@property (readonly, nonatomic) id /* block */ scoringFunction;

+ (id)_getQueue;
+ (void)applyWordLanguageModelProbabilityToPath:(id)a0 stemmedFromPath:(id)a1 isCommittingToken:(BOOL)a2;

- (id).cxx_construct;
- (id)debugDescription;
- (void)dealloc;
- (long long)tokenCount;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (long long)characterCount;
- (void)setCharacterCount:(long long)a0;
- (unsigned long long)_currentTokenStringLength;
- (void)_updateCharacterLanguageModelLogProbabilityForString:(id)a0 stemmingFromPath:(id)a1 normalizedCodepoint:(unsigned int)a2;
- (void)_updateLexiconLogProbabilityForString:(id)a0 stemmingFromPath:(id)a1;
- (float)_wordLanguageModelLogProbabilityForString:(id)a0 originalWordRanges:(id)a1 originalWordIDs:(struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x0; unsigned int *x1; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x0; } x2; })a2 wordRanges:(id)a3 wordIDs:(struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x0; unsigned int *x1; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x0; } x2; })a4;
- (id)childPathWithBlankLogProb:(double)a0;
- (void)commitTokenAtTimestep:(long long)a0 currentSymbolLogProbability:(double)a1 commitAction:(long long)a2 string:(id)a3 stemmingFromPath:(id)a4;
- (BOOL)hasProblematicMixedScriptWords;
- (id)initWithLanguageResourceBundle:(id)a0 scoringFunction:(id /* block */)a1 initialCharacterLMState:(struct CVNLPLanguageModelWithState { } *)a2 characterTokenIDs:(struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x0; unsigned int *x1; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x0; } x2; })a3 wordTokenIDs:(struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x0; unsigned int *x1; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x0; } x2; })a4 optimizingAlignment:(BOOL)a5 hasContext:(BOOL)a6;
- (double)lexiconScore;
- (void)merge:(id)a0 logProbCumulator:(id /* block */)a1;
- (double)modelLogProbability;
- (id)pathByExtendingWithString:(id)a0 extendedPathString:(id)a1 blankLogProb:(double)a2 nonBlankLogProb:(double)a3 timestep:(long long)a4 commitAction:(long long)a5 symbolLogProb:(double)a6;
- (long long)pseudoSpaceCount;
- (double)scoreForTokenIndex:(long long)a0;
- (void)setCharacterLanguageModelLogProbability:(double)a0;
- (void)setPseudoSpaceCount:(long long)a0;
- (void)setWordLanguageModelLogProbability:(double)a0;
- (id)tokensWithTimestep:(long long)a0 isFinalTimestep:(BOOL)a1;
- (void)updateLastTokenWithMaxActivation:(long long)a0 totalLogProbability:(double)a1 tokenBoundaryLogProbability:(double)a2;

@end
