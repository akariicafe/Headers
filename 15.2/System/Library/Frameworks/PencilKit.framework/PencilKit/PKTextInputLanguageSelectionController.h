@class NSArray, NSString, UIImage, NSMutableDictionary, NSTimer, UIMenu;

@interface PKTextInputLanguageSelectionController : NSObject <PKTextInputLanguageSelectionTokenStore> {
    UIMenu *_cachedLanguageMenu;
    NSMutableDictionary *_observers;
    NSTimer *_iconDisplayTimer;
}

@property (class, retain, nonatomic) NSArray *_inputModesForTesting;
@property (class, retain, nonatomic) NSArray *_preferencesLanguagesForTesting;
@property (class, retain, nonatomic) NSArray *_preferredLanguagesForTesting;

@property (copy, nonatomic) NSArray *_cachedLanguageIdentifiers;
@property (readonly, copy, nonatomic) NSArray *currentLanguageIdentifiers;
@property (readonly, nonatomic) UIImage *languageIdentificationIcon;
@property (readonly, nonatomic) UIMenu *languageSelectionMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)hasSomeSupportedAndEnabledLocale;
+ (id)supportedAndEnabledLocaleIdentifiers;
+ (id)filteredEnabledLocaleIdentifiers;
+ (id)_sortedStringsArray:(id)a0 withArray:(id)a1;
+ (id)_filterEnglishWithLanguages:(id)a0 outRemapTarget:(id *)a1;
+ (void)_getNormalizedLanguageIdentifier:(id *)a0 dedupLanguageKey:(id *)a1 forInputMode:(id)a2;
+ (void)_getNormalizedLanguageIdentifier:(id *)a0 dedupLanguageKey:(id *)a1 forInputModeIdentifier:(id)a2;
+ (void)_enumerateSupportedAndEnabledLocaleIdentifiersWithBlock:(id /* block */)a0;
+ (void)_performOperations:(id /* block */)a0 withActiveInputModes:(id)a1 preferencesLanguages:(id)a2 preferredLanguages:(id)a3;
+ (id)_preferredRecognitionLocaleIdentifierFromIdentifiers:(id)a0;
+ (void)_performOperations:(id /* block */)a0 withActiveInputModeIdentifiers:(id)a1 preferencesLanguages:(id)a2 preferredLanguages:(id)a3;

- (id)registerObserver:(id /* block */)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)notifyObserversOfCurrentLanguageWithTimeout;
- (void)_handleKeyboardPreferencesChanged:(id)a0;
- (void)_handleKeyboardCurrentInputModeChanged:(id)a0;
- (id)_enabledLanguagesByPreference;
- (void)_clearCachesAndUpdateIconObservers;
- (void)_updateWithLanguageIdentifiers:(id)a0;
- (void)_updateSelectedLanguageInCachedMenu;
- (id)_iconForLanguageIdentifier:(id)a0;
- (void)_switchToLanguageIfSupported:(id)a0;
- (BOOL)shouldIdentifyLanguages;
- (void)_notifyLanguageObserversIncludingIcon:(BOOL)a0;
- (void)_updateLanguageMenuIfNecessary;
- (id)_currentKeyboardIdentifier;
- (void)_pencilPreferencesChangedCallback:(id)a0;
- (void)ensureKeyboardLanguageConsistencyIfNeeded;

@end
