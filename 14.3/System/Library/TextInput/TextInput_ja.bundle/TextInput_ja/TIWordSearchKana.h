@class TIWordSearchCandidateResultSet;

@interface TIWordSearchKana : TIWordSearch {
    unsigned long long _insertKatakanaAtIndex;
    id /* block */ _contactObserver;
}

@property (retain, nonatomic) TIWordSearchCandidateResultSet *candidateResultSet;
@property BOOL supportsPairedPunctutationInput;
@property BOOL flickOnly;

+ (id /* block */)configureContactCollectionObserver:(id)a0 previousObserver:(id /* block */)a1;
+ (id)sharedMecabraWrapper;
+ (void)resetSharedMecabraWrapper;
+ (void)clearCachedContactObserver;

- (void).cxx_destruct;
- (void)dealloc;
- (void)updateMecabraState;
- (int)mecabraInputMethodType;
- (unsigned long long)mecabraCreationOptions;
- (id)initTIWordSearchWithInputMode:(id)a0;
- (id)initTIWordSearchWithInputMode:(id)a0 mecabraWrapper:(id)a1;
- (id)candidatesCacheKeyForOperation:(id)a0;
- (void)clearObservers;
- (void)dynamicDictionariesRemoved:(id)a0;
- (BOOL)shouldMoveCursor:(id)a0;
- (BOOL)isAnalyzingJapaneseRomaji;
- (void)setInsertKatakanaAtIndex:(unsigned long long)a0;
- (id)candidateForDefault:(id)a0 rawInputString:(id)a1;
- (BOOL)_insertString:(id)a0 input:(id)a1 at:(unsigned long long)a2 force:(BOOL)a3;
- (id)makeCandidates:(id)a0 contextString:(id)a1 predictionEnabled:(BOOL)a2 reanalysisMode:(BOOL)a3 withInputManager:(id)a4 geometryModelData:(id)a5 flickUsed:(BOOL)a6 hardwareKeyboardMode:(BOOL)a7 referenceMode:(BOOL)a8 singlePhrase:(BOOL)a9;

@end
