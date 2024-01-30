@class NSCache, TIWordSearchOperationGetCandidates, TIMecabraEnvironment, TIInputMode, NSString, TIMecabraWrapper;

@interface TIWordSearch : NSObject <TIKeyboardActivityObserving> {
    id _userDictionaryObserver;
    id _dictionaryUpdateObserver;
}

@property (retain) TIWordSearchOperationGetCandidates *operation;
@property (readonly, nonatomic) int mecabraLanguage;
@property (retain) TIMecabraWrapper *mecabraWrapper;
@property (retain, nonatomic) NSCache *candidatesCache;
@property BOOL autoCorrects;
@property BOOL shouldLearnAcceptedCandidate;
@property (readonly) TIInputMode *inputMode;
@property (retain, nonatomic) TIMecabraEnvironment *mecabraEnvironment;
@property (readonly) struct __Mecabra { } *mecabra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recipientRecords;
+ (id)sharedOperationQueue;
+ (id)configureUserDictionaryObserver:(id)a0 previousObserver:(id)a1;
+ (id)mecabraLearningDictionaryDirectory;

- (void)cancel;
- (void)clearCache;
- (void)contactStoreDidChange:(id)a0;
- (void)keyboardActivityDidTransition:(id)a0;
- (void)releaseBackgroundActivityAssertion;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (void)dealloc;
- (void)lastAcceptedCandidateCorrected;
- (void)handleMemoryPressureLevel:(unsigned long long)a0 excessMemoryInBytes:(unsigned long long)a1;
- (void)revertInlineCandidate;
- (void)adjustEnvironmentOnAction:(long long)a0;
- (void)declareEndOfSentence;
- (void)endInputSession;
- (void)setDebuggingLogEnabled:(BOOL)a0;
- (void)updateMecabraState;
- (void)clearLearningDictionary;
- (int)mecabraInputMethodType;
- (unsigned long long)mecabraCreationOptions;
- (id)mecabraCreationOptionsDictionary;
- (id)initTIWordSearchWithInputMode:(id)a0;
- (id)initTIWordSearchWithInputMode:(id)a0 mecabraWrapper:(id)a1;
- (id)candidatesCacheKeyForOperation:(id)a0;
- (id)candidatesForOperation:(id)a0;
- (id)uncachedCandidatesForOperation:(id)a0;
- (id)cachedCandidatesForOperation:(id)a0;
- (void)_addFacemarkCandidatesToResultSet:(id)a0 forInput:(id)a1;
- (BOOL)addFacemarkCandidatesToResultSet:(id)a0 forInput:(id)a1;
- (void)performAccept:(void *)a0 isPartial:(BOOL)a1;
- (void)resetPreviousWord;
- (void)performOperationAsync:(id)a0;
- (void)performOperationAsync:(id)a0 withBackgroundActivityAssertion:(BOOL)a1;
- (void)completeOperationsInQueue;
- (void)saveLearningDictionary;
- (void)clearObservers;
- (void)dynamicDictionariesRemoved:(id)a0;
- (void)setLanguageModelAdaptationContextWithClientIdentifier:(id)a0 recipientIdentifier:(id)a1;
- (void)setLanguageModelAdaptationContext:(id)a0;
- (void)updateUserWordEntries;
- (void)updateDictionaryPaths;
- (void)adaptOfflineToParagraph:(id)a0 adaptationContext:(id)a1 timeStamp:(double)a2;
- (void)flushDynamicData;
- (void)setLeftDocumentContext:(id)a0 rightDocumentContext:(id)a1;
- (void)clearLeftDocumentContext;
- (void)commitSurface:(id)a0;
- (void)commitPunctuationSurface:(id)a0;
- (void)resetMecabraEnvironment;
- (void)setMecabraTextContentType:(int)a0;

@end
