@class NSURL, NSString, NSURLSession;

@interface WFMicrosoftTranslateSessionManager : NSObject

@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSURLSession *session;
@property (copy, nonatomic) NSString *apiKey;

- (id)initWithSession:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSessionConfiguration:(id)a0;
- (void)getAvailableLanguages:(id /* block */)a0;
- (void)detectLanguagesOfStrings:(id)a0 completion:(id /* block */)a1;
- (void)translateStrings:(id)a0 fromLanguage:(id)a1 intoLanguage:(id)a2 completion:(id /* block */)a3;
- (void)getAccessTokenWithCompletion:(id /* block */)a0;
- (void)sendRequestWithURL:(id)a0 queryParameters:(id)a1 requestBody:(id)a2 completion:(id /* block */)a3;

@end
