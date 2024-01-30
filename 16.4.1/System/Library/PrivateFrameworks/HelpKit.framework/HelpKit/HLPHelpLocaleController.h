@class NSArray, NSURL;

@interface HLPHelpLocaleController : HLPRemoteDataController {
    NSArray *_supportedLanguageCodes;
    NSURL *_helpBookURL;
}

@property (retain, nonatomic) NSArray *preferredLanguagesOverride;
@property (retain, nonatomic) NSArray *locales;

- (id)initWithURL:(id)a0;
- (id)currentLocale;
- (void).cxx_destruct;
- (id)englishLocale;
- (id)localeWithPreferredLanguages:(id)a0;
- (void)processData:(id)a0 formattedData:(id)a1;
- (void)processFileURLWithCompletionHandler:(id /* block */)a0;

@end
