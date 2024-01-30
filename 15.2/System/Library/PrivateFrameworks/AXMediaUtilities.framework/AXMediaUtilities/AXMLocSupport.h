@class NSLocale;

@interface AXMLocSupport : NSObject

@property (retain, nonatomic) NSLocale *en_USLocale;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)localeBaseLanguageIsEnglish:(id)a0;
- (id)localeMatchingBaseLanguageOfLocale:(id)a0 fromLocales:(id)a1;
- (id)localeForLanguageCode:(id)a0;
- (id)baseLanguageForLocale:(id)a0;

@end
