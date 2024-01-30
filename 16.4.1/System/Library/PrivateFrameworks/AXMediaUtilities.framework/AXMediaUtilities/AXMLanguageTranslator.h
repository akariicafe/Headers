@class NSArray, _LTTranslator;

@interface AXMLanguageTranslator : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_cachedAvailableTranslationLocales;
}

@property (retain, nonatomic) _LTTranslator *translator;

+ (id)allowedTargetLocalesForTranslation;

- (id)init;
- (void).cxx_destruct;
- (id)_canonicalLocaleForLocale:(id)a0;
- (id)_canonicalLocalesForLocales:(id)a0;
- (id)_descriptionForLocales:(id)a0;
- (id)_filteredLocalesToInstallFromAvailableLocales:(id)a0 requestedLocales:(id)a1 fallBackToBaseLanguageIfNeeded:(BOOL)a2;
- (id)_localeIdentifiersForLocales:(id)a0;
- (id)_proposedTranslationLocaleForLocale:(id)a0;
- (void)availableTranslationLocales:(id /* block */)a0;
- (void)installOfflineTranslationModelForLanguageCodeIfNeeded:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)installOfflineTranslationModelForLocales:(id)a0 fallBackToBaseLanguageIfNeeded:(BOOL)a1 forceReinstall:(BOOL)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (void)installedTranslationLocales:(id /* block */)a0;
- (void)translateText:(id)a0 toLocale:(id)a1 respectAllowList:(BOOL)a2 completion:(id /* block */)a3;
- (id)translateText:(id)a0 toLocale:(id)a1 respectAllowList:(BOOL)a2 metrics:(id)a3 error:(id *)a4;
- (void)userSelectableTranslationLocales:(id /* block */)a0;

@end
