@class NSString;

@interface NetPreferences : NSObject {
    NSString *_buildVersion;
    NSString *_productVersion;
    BOOL _serviceDebugging;
    BOOL _isNetworkReachable;
    NSString *_requestCountryCode;
    NSString *_requestLanguageCode;
    NSString *_acceptLanguageCode;
}

@property (retain) NSString *requestCountryCode;
@property (retain) NSString *requestLanguageCode;
@property (retain) NSString *acceptLanguageCode;
@property (nonatomic, getter=isNetworkReachable) BOOL networkReachable;
@property (readonly, nonatomic) NSString *UUID;

+ (void)clearSharedPreferences;
+ (id)sharedPreferences;

- (void)resetLocale;
- (id)stocksYQLBaseURL;
- (id)_urlStringWithHost:(id)a0;
- (void)addStocksHeadersToPostRequest:(id)a0;
- (BOOL)serviceDebugging;
- (id)init;
- (void).cxx_destruct;
- (id)signedRequestForURL:(id)a0 parameters:(id)a1;
- (id)logoButtonImage;
- (id)stocksCountryCode;
- (id)backsideLogoURL;
- (id)defaultBacksideLogoURL;
- (id)_stocksUserAgent;
- (id)_stocksAcceptLanguage;
- (id)stocksLanguageCodeForLanguage:(id)a0;
- (id)serviceDebuggingPath;
- (id)logoBacksideImage;
- (id)_cacheDirectoryPath;
- (id)financeRequestAttributes;
- (id)stocksLanguageCode;
- (id)fullQuoteURLOverrideForStock:(id)a0;

@end
