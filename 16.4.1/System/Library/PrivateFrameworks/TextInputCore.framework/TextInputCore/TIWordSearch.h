@class NSCache, TIWordSearchOperationGetCandidates, TIMecabraEnvironment, TIInputMode, NSString, TIMecabraWrapper;

@interface TIWordSearch : NSObject <TIKeyboardActivityObserving> {
    id _userDictionaryObserver;
    id _dictionaryUpdateObserver;
}

@property (retain) TIWordSearchOperationGetCandidates *operation;
@property (retain, nonatomic) id supplementalLexiconObserver;
@property (copy, nonatomic) id /* block */ contactObserver;
@property (retain) TIMecabraWrapper *mecabraWrapper;
@property (retain, nonatomic) NSCache *candidatesCache;
@property (readonly, nonatomic) int mecabraLanguage;
@property BOOL autoCorrects;
@property BOOL shouldLearnAcceptedCandidate;
@property (readonly) TIInputMode *inputMode;
@property (retain, nonatomic) TIMecabraEnvironment *mecabraEnvironment;
@property (readonly) struct __Mecabra { } *mecabra;
@property (nonatomic) BOOL disablePersonalData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recipientRecords;
+ (id)sharedOperationQueue;
+ (id)configureUserDictionaryObserver:(id)a0 previousObserver:(id)a1;
+ (id)mecabraLearningDictionaryDirectory;

- (void)clearCache;
- (void)keyboardActivityDidTransition:(id)a0;
- (void)contactStoreDidChange:(id)a0;
- (BOOL)isCancelled;
- (void)cancel;
- (void)dealloc;
- (void)releaseBackgroundActivityAssertion;
- (void)handleMemoryPressureLevel:(unsigned long long)a0 excessMemoryInBytes:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)lastAcceptedCandidateCorrected;
- (void)flushDynamicData;
- (int)mecabraInputMethodType;
- (id)candidatesCacheKeyForOperation:(id)a0;
- (BOOL)shareVocabulary;
- (id)uncachedCandidatesForOperation:(id)a0;
- (void)endInputSession;
- (void)_addFacemarkCandidatesToResultSet:(id)a0 forInput:(id)a1;
- (void)adaptOfflineToParagraph:(id)a0 adaptationContext:(id)a1 timeStamp:(double)a2;
- (void)addContact:(id)a0 toVocabulary:(void *)a1 toReadingPairs:(id)a2;
- (BOOL)addFacemarkCandidatesToResultSet:(id)a0 forInput:(id)a1;
- (void)adjustEnvironmentOnAction:(long long)a0;
- (id)cachedCandidatesForOperation:(id)a0;
- (id)candidatesForOperation:(id)a0;
- (void)clearLearningDictionary;
- (void)clearLeftDocumentContext;
- (void)clearObservers;
- (void)commitPunctuationSurface:(id)a0;
- (void)commitSurface:(id)a0;
- (void)completeOperationsInQueue;
- (void)declareEndOfSentence;
- (void)dynamicDictionariesRemoved:(id)a0;
- (id)initTIWordSearchWithInputMode:(id)a0;
- (id)initTIWordSearchWithInputMode:(id)a0 mecabraWrapper:(id)a1;
- (void)insertTopSupplementalCandidateSurroundingCursorToFrontOfResultSet:(id)a0;
- (unsigned long long)mecabraCreationOptions;
- (id)mecabraCreationOptionsDictionary;
- (unsigned char)nameReadingPairGenerationMode;
- (void)performAccept:(void *)a0 isPartial:(BOOL)a1;
- (void)performOperationAsync:(id)a0;
- (void)performOperationAsync:(id)a0 withBackgroundActivityAssertion:(BOOL)a1;
- (void)resetMecabraEnvironment;
- (void)resetPreviousWord;
- (void)revertInlineCandidate;
- (void)saveLearningDictionary;
- (void)setDebuggingLogEnabled:(BOOL)a0;
- (void)setLanguageModelAdaptationContext:(id)a0;
- (void)setLanguageModelAdaptationContextWithClientIdentifier:(id)a0 recipientIdentifier:(id)a1;
- (void)setLeftDocumentContext:(id)a0 rightDocumentContext:(id)a1;
- (void)setMecabraTextContentType:(int)a0;
- (void)updateAddressBook;
- (void)updateDictionaryPaths;
- (void)updateMecabraState;
- (void)updateSupplementalLexicon;
- (void)updateUserWordEntries;

@end
