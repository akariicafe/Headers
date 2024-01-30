@class NSArray;

@interface TIWordSearchChinesePhonetic : TIWordSearch {
    id /* block */ _contactObserver;
}

@property (retain, nonatomic) NSArray *fuzzyPinyinPairs;
@property (nonatomic) BOOL fuzzyPinyinEnabled;
@property (nonatomic) BOOL tenKeyPinyinEnabled;
@property (nonatomic) int shuangpinType;

+ (id)pinyinCharacterSetWithTones;

- (void).cxx_destruct;
- (void)dealloc;
- (void)updateMecabraState;
- (int)mecabraInputMethodType;
- (id)candidatesCacheKeyForOperation:(id)a0;
- (id)uncachedCandidatesForOperation:(id)a0;
- (void)clearObservers;
- (void)updateAddressBook;
- (void)updateFuzzyPinyinSettings;
- (void)updateShuangpinTypeWithReanalysisMode:(BOOL)a0;
- (unsigned long long)mecabraAnalysisOptionsWithAutocorrectionEnabled:(BOOL)a0 firstSyllableLocked:(BOOL)a1 reanalysisMode:(BOOL)a2 hardwareKeyboardMode:(BOOL)a3 predictionEnabled:(BOOL)a4;
- (void)clearCacheForInputString:(id)a0 keyboardInput:(id)a1 unambiguousSyllableCount:(unsigned long long)a2 selectedDisambiguationCandidateIndex:(unsigned long long)a3;
- (void)addContact:(id)a0 toVocabulary:(void *)a1 toReadingPairs:(id)a2;

@end
