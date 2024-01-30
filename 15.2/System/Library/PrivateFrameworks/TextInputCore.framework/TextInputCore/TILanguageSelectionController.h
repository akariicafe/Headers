@class NSArray, NSMutableDictionary, TIInputMode, NSDictionary, NSMutableArray, TILanguageModelAdaptationContext;
@protocol TIMultilingualPreferenceProviding, TILanguageSelectionControllerDelegate, TILanguageLikelihoodModeling;

@interface TILanguageSelectionController : NSObject {
    struct vector<TITokenID, std::allocator<TITokenID>> { struct TITokenID *__begin_; struct TITokenID *__end_; struct __compressed_pair<TITokenID *, std::allocator<TITokenID>> { struct TITokenID *__value_; } __end_cap_; } m_buffered_tokens;
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

+ (id)inferInputModeForLanguage:(id)a0 enabled:(id)a1;
+ (id)inferSecondaryInputModeForPrimary:(id)a0 enabled:(id)a1 enabledExcludingPreferredLanguages:(id)a2;
+ (id)inputModesForLanguageIdentifiers:(id)a0;
+ (void)reportTypedTokens:(const void *)a0 activeInputModes:(id)a1;
+ (id)inputModeForLanguageIdentifier:(id)a0;
+ (id)sharedLanguageLikelihoodModel;
+ (id)inferSecondaryInputModeForPrimary:(id)a0 enabled:(id)a1;
+ (id)multilingualInputModesForInputModes:(id)a0;

- (id)fetchPreferredSecondaryInputMode;
- (void)addTokenString:(id)a0 tokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a1 context:(const struct TITokenID { unsigned int x0; unsigned int x1; } *)a2 contextLength:(unsigned long long)a3;
- (id)fetchUserEnabledInputModes;
- (id)fetchUserEnabledInputModesExcludingPreferredLanguages;
- (void)appleKeyboardsPreferencesChanged:(id)a0;
- (void)updateActiveInputModesSuppressingNotification:(BOOL)a0;
- (BOOL)updateInputModeProbabilities;
- (void)appleKeyboardsInternalSettingsChanged:(id)a0;
- (BOOL)didProbabilityChangeSignificantly;
- (void)removeTokenString:(id)a0 tokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a1 context:(const struct TITokenID { unsigned int x0; unsigned int x1; } *)a2 contextLength:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)init;
- (double)lastOfflineAdaptationTimeForApp:(id)a0;
- (void)dealloc;
- (id).cxx_construct;
- (void)flushBuffer;
- (id)initWithLanguageLikelihoodModel:(id)a0 preferenceProvider:(id)a1;
- (void)feedBufferedTokenStringsToModel;
- (float)priorProbabilityForInputMode:(id)a0;
- (BOOL)bufferIsCompatibleWithContext:(const struct TITokenID { unsigned int x0; unsigned int x1; } *)a0 contextLength:(unsigned long long)a1;

@end
