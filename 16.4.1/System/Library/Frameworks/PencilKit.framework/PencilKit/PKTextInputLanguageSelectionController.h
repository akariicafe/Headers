@class NSHashTable, NSArray, NSString, UIImage, NSMutableDictionary, NSTimer, UIMenu;

@interface PKTextInputLanguageSelectionController : NSObject <PKTextInputLanguageSelectionTokenStore> {
    UIMenu *_cachedLanguageMenu;
    NSMutableDictionary *_observers;
    NSTimer *_iconDisplayTimer;
    NSHashTable *_languageSelectionControllerObservers;
}

@property (class, retain, nonatomic) NSArray *_inputModesForTesting;
@property (class, retain, nonatomic) NSArray *_preferencesLanguagesForTesting;
@property (class, retain, nonatomic) NSArray *_preferredLanguagesForTesting;

@property (copy, nonatomic) NSArray *_cachedLanguageIdentifiers;
@property (copy, nonatomic) NSArray *_cachedLanguageIdentifiersForEmojiAlternatives;
@property (readonly, copy, nonatomic) NSArray *currentLanguageIdentifiers;
@property (readonly, copy, nonatomic) NSArray *currentLanguageIdentifiersForEmojiAlternatives;
@property (readonly, nonatomic) UIImage *languageIdentificationIcon;
@property (readonly, nonatomic) UIMenu *languageSelectionMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)activeInputModes;
+ (void)_getNormalizedLanguageIdentifier:(id *)a0 dedupLanguageKey:(id *)a1 forInputMode:(id)a2;
+ (id)_currentLanguageIdentifiersForEmojiAlternatives;
+ (void)_enumerateSupportedAndEnabledLocaleIdentifiersWithBlock:(id /* block */)a0;
+ (id)_filterEnglishWithLanguages:(id)a0 outRemapTarget:(id *)a1;
+ (void)_getNormalizedLanguageIdentifier:(id *)a0 dedupLanguageKey:(id *)a1 forInputMode:(id)a2 mappingYueToZh:(BOOL)a3;
+ (void)_getNormalizedLanguageIdentifier:(id *)a0 dedupLanguageKey:(id *)a1 forInputModeIdentifier:(id)a2;
+ (void)_getNormalizedLanguageIdentifier:(id *)a0 dedupLanguageKey:(id *)a1 forInputModeIdentifier:(id)a2 mappingYueToZh:(BOOL)a3;
+ (void)_performOperations:(id /* block */)a0 withActiveInputModeIdentifiers:(id)a1 preferencesLanguages:(id)a2 preferredLanguages:(id)a3;
+ (void)_performOperations:(id /* block */)a0 withActiveInputModes:(id)a1 preferencesLanguages:(id)a2 preferredLanguages:(id)a3;
+ (id)_preferredRecognitionLocaleIdentifierFromIdentifiers:(id)a0;
+ (id)_sortedStringsArray:(id)a0 withArray:(id)a1;
+ (id)filteredEnabledLocaleIdentifiers;
+ (BOOL)hasSomeSupportedAndEnabledLocale;
+ (id)supportedAndEnabledLocaleIdentifiers;

- (void)addObserver:(id)a0;
- (id)registerObserver:(id /* block */)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_updateWithLanguageIdentifiers:(id)a0;
- (void)_clearCachesAndUpdateIconObservers;
- (id)_currentKeyboardIdentifier;
- (id)_enabledLanguagesByPreference;
- (void)_handleKeyboardCurrentInputModeChanged:(id)a0;
- (void)_handleKeyboardPreferencesChanged:(id)a0;
- (id)_iconForLanguageIdentifier:(id)a0;
- (void)_notifyLanguageSelectionDidChange;
- (void)_pencilPreferencesChangedCallback:(id)a0;
- (void)_switchToLanguageIfSupported:(id)a0;
- (void)_updateLanguageMenuIfNecessary;
- (void)_updateSelectedLanguageInCachedMenu;
- (void)ensureKeyboardLanguageConsistencyIfNeeded;
- (void)notifyLanguageDidChange;
- (BOOL)shouldIdentifyLanguages;

@end
