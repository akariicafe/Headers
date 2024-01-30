@class NSLinguisticTagger, NSMutableDictionary;

@interface SCROBrailleSubstitutionManager : NSObject {
    NSMutableDictionary *_lookup;
    NSLinguisticTagger *_lingusticTagger;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)brailleSubstitutionForType:(long long)a0 withLanguage:(id)a1;
- (void)_loadLanguageSubstitutions:(id)a0 intoDictionary:(id)a1;
- (void)_ensureLanguageDataPresent:(id)a0;
- (id)stringWithBrailleSubstitutions:(id)a0 withLanguage:(id)a1;

@end
