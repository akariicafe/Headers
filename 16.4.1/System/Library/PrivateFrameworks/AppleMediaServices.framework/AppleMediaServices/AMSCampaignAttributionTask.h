@class NSURL, NSString, NSArray, AMSBagKeySet, ACAccount, AMSURLSession, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSCampaignAttributionTask : AMSTask <AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (readonly, nonatomic) AMSURLSession *URLSession;
@property (retain, nonatomic) ACAccount *account;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (copy, nonatomic) NSArray *additionalQueryItems;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (id)perform;
- (void).cxx_destruct;
- (id)_queryItemNames;
- (id)_buildProcessRedirectURLWithEndpointURL:(id)a0 error:(id *)a1;
- (id)_encodeRequestForURL:(id)a0 error:(id *)a1;
- (id)_parseAllowedQueryParamsFromInfo:(id)a0 error:(id *)a1;
- (id)_parseCookiesFromResult:(id)a0;
- (id)_parseEndpointURLFromInfo:(id)a0 error:(id *)a1;
- (id)_parseRedirectURLFromResult:(id)a0 error:(id *)a1;
- (id)_processRedirectWithEndpointURL:(id)a0 error:(id *)a1;
- (id)_processRedirectWithRequest:(id)a0 error:(id *)a1;
- (id)_retrieveProcessRedirectInfoWithError:(id *)a0;
- (void)_setAccountCookies:(id)a0;
- (BOOL)_validateAllowlist:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 bag:(id)a1;
- (id)initWithURL:(id)a0 bag:(id)a1 URLSession:(id)a2;

@end
