@class NSDictionary, _PASLRUCache;

@interface PRELocaleDetection : NSObject {
    NSDictionary *_preferredLocales;
    _PASLRUCache *_lastConfidentLocaleForSender;
}

+ (id)sharedInstance;
+ (BOOL)isLanguageMismatchedForIdentifier:(id)a0 withIdentifier:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (id)localeForMessage:(id)a0 defaultLocale:(id)a1 sender:(id)a2;
- (id)initWithLanguageLimit:(unsigned long long)a0 withPreferredLocales:(id)a1;
- (id)_getPreferredLocales;
- (id)_userLocaleDetectedFromString:(id)a0;

@end
