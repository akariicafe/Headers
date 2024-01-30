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

- (BOOL)serviceDebugging;
- (id)backsideLogoURL;
- (id)serviceDebuggingPath;
- (void)addStocksHeadersToPostRequest:(id)a0;
- (id)logoBacksideImage;
- (id)stocksCountryCode;
- (id)logoButtonImage;
- (void)resetLocale;
- (id)stocksYQLBaseURL;
- (id)defaultBacksideLogoURL;
- (void).cxx_destruct;
- (id)fullQuoteURLOverrideForStock:(id)a0;
- (id)init;
- (id)stocksLanguageCodeForLanguage:(id)a0;
- (id)_stocksAcceptLanguage;
- (id)_cacheDirectoryPath;
- (id)_stocksUserAgent;
- (id)financeRequestAttributes;
- (id)signedRequestForURL:(id)a0 parameters:(id)a1;
- (id)stocksLanguageCode;
- (id)_urlStringWithHost:(id)a0;

@end
