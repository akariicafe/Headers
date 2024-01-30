@class NSArray, NSMutableDictionary, TIInputMode, NSDictionary, NSMutableArray, TILanguageModelAdaptationContext;
@protocol TIMultilingualPreferenceProviding, TILanguageSelectionControllerDelegate, TILanguageLikelihoodModeling;

@interface TILanguageSelectionController : NSObject {
    struct vector<TITokenID, std::__1::allocator<TITokenID> > { struct TITokenID *__begin_; struct TITokenID *__end_; struct __compressed_pair<TITokenID *, std::__1::allocator<TITokenID> > { struct TITokenID *__value_; } __end_cap_; } m_buffered_tokens;
}

@property (readonly, nonatomic) id<TILanguageLikelihoodModeling> languageLikelihoodModel;
@property (readonly, nonatomic) id<TIMultilingualPreferenceProviding> preferenceProvider;
@property (retain, nonatomic) TIInputMode *primaryInputMode;
@property (retain, nonatomic) TIInputMode *preferredSecondaryInputMode;
@property (retain, nonatomic) TIInputMode *inferredSecondaryInputMode;
@property (retain, nonatomic) NSArray *userEnabledInputModes;
@property (retain, nonatomic) NSArray *activeInputModes;
@property (readonly, nonatomic) NSMutableDictionary *inputModeProbabilities;
@property (copy, nonatomic) NSDictionary *referenceInputModeProbabilities;
@property (readonly, nonatomic) NSMutableArray *bufferedTokenStrings;
@property (nonatomic) id<TILanguageSelectionControllerDelegate> delegate;
@property (retain, nonatomic) TILanguageModelAdaptationContext *adaptationContext;

+ (id)inputModesForLanguageIdentifiers:(id)a0;
+ (id)inferInputModeForLanguage:(id)a0 enabled:(id)a1;
+ (id)inputModeForLanguageIdentifier:(id)a0;
+ (id)inferSecondaryInputModeForPrimary:(id)a0 enabled:(id)a1 enabledExcludingPreferredLanguages:(id)a2;
+ (id)inferSecondaryInputModeForPrimary:(id)a0 enabled:(id)a1;
+ (id)sharedLanguageLikelihoodModel;
+ (void)reportTypedTokens:(const struct vector<TITokenID, std::__1::allocator<TITokenID> > { struct TITokenID *x0; struct TITokenID *x1; struct __compressed_pair<TITokenID *, std::__1::allocator<TITokenID> > { struct TITokenID *x0; } x2; } *)a0 activeInputModes:(id)a1;
+ (id)multilingualInputModesForInputModes:(id)a0;

- (BOOL)didProbabilityChangeSignificantly;
- (id)init;
- (double)lastOfflineAdaptationTimeForApp:(id)a0;
- (void).cxx_destruct;
- (BOOL)updateInputModeProbabilities;
- (void)dealloc;
- (id)fetchUserEnabledInputModesExcludingPreferredLanguages;
- (void)addTokenString:(id)a0 tokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a1 context:(const struct TITokenID { unsigned int x0; unsigned int x1; } *)a2 contextLength:(unsigned long long)a3;
- (void)feedBufferedTokenStringsToModel;
- (void)removeTokenString:(id)a0 tokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a1 context:(const struct TITokenID { unsigned int x0; unsigned int x1; } *)a2 contextLength:(unsigned long long)a3;
- (void)appleKeyboardsPreferencesChanged:(id)a0;
- (id)initWithLanguageLikelihoodModel:(id)a0 preferenceProvider:(id)a1;
- (id).cxx_construct;
- (void)flushBuffer;
- (id)fetchPreferredSecondaryInputMode;
- (void)appleKeyboardsInternalSettingsChanged:(id)a0;
- (BOOL)bufferIsCompatibleWithContext:(const struct TITokenID { unsigned int x0; unsigned int x1; } *)a0 contextLength:(unsigned long long)a1;
- (id)fetchUserEnabledInputModes;
- (float)priorProbabilityForInputMode:(id)a0;
- (void)updateActiveInputModesSuppressingNotification:(BOOL)a0;

@end
