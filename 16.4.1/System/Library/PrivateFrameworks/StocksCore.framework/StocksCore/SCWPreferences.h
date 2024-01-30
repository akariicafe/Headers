@class NSString;

@interface SCWPreferences : NSObject {
    NSString *_requestCountryCode;
    NSString *_requestLanguageCode;
    NSString *_acceptLanguageCode;
}

@property (retain) NSString *requestCountryCode;
@property (retain) NSString *requestLanguageCode;
@property (retain) NSString *acceptLanguageCode;
@property (readonly, nonatomic) NSString *UUID;

+ (id)sharedPreferences;
+ (void)clearSharedPreferences;

- (void)resetLocale;
- (id)stocksYQLBaseURL;
- (id)_stocksAcceptLanguage;
- (id)signedRequestForURL:(id)a0 parameters:(id)a1;
- (id)stocksCountryCode;
- (id)init;
- (id)stocksLanguageCodeForLanguage:(id)a0;
- (id)_stocksUserAgent;
- (void).cxx_destruct;
- (id)stocksLanguageCode;

@end
