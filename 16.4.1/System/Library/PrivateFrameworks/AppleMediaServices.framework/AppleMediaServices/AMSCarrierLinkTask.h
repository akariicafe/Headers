@class AMSURLRequestEncoder, NSString, AMSProcessInfo, AMSCarrierLinkParams, NSDictionary, AMSURLSession, AMSBagKeySet, AMSMetrics, ACAccount, AMSEngagement, AMSPromise;
@protocol AMSBagProtocol, AMSCarrierLinkTaskDelegate;

@interface AMSCarrierLinkTask : AMSTask <AMSURLProtocolDelegate, NSURLSessionDelegate, AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (retain, nonatomic) ACAccount *account;
@property (readonly, nonatomic) AMSEngagement *engagementHandler;
@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) AMSMetrics *metrics;
@property (readonly, nonatomic) NSString *msisdn;
@property (readonly, nonatomic) AMSURLRequestEncoder *requestEncoder;
@property (readonly, nonatomic) AMSURLSession *urlSession;
@property (readonly, nonatomic) AMSPromise *pacTokenPromise;
@property (retain, nonatomic) NSDictionary *additionalLinkingParameters;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (weak, nonatomic) id<AMSCarrierLinkTaskDelegate> delegate;
@property (readonly, nonatomic) AMSCarrierLinkParams *linkParams;
@property (copy, nonatomic) NSDictionary *metricsOverlay;
@property (readonly, nonatomic) NSString *productCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void)AMSURLSession:(id)a0 task:(id)a1 handleDialogRequest:(id)a2 completion:(id /* block */)a3;
- (id)perform;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleEngagementRequest:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (id)_linkParameters;
- (id)_linkURLRequest;
- (id)_performLinking;
- (void)_delegateHandleEngagementRequest:(id)a0 completion:(id /* block */)a1;
- (id)_linkFailureFromResult:(id)a0;
- (id)_metricsEventFromCarrierLinkResult:(id)a0 error:(id)a1;
- (id)_pacToken;
- (void)_performDelegateAuthenticationWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)_performLinkingWithValidations;
- (id)_promptForAccount;
- (id)_recordEngagementMetricsEvent:(id)a0;
- (id)_resultDecodingURLResult:(id)a0;
- (id)initWithAccount:(id)a0 bag:(id)a1 engagementHandler:(id)a2 guid:(id)a3 linkParams:(id)a4 metrics:(id)a5 msisdn:(id)a6 pacTokenPromise:(id)a7 productCode:(id)a8 requestEncoder:(id)a9 urlSession:(id)a10;
- (id)initWithAccount:(id)a0 bag:(id)a1 linkParams:(id)a2 productCode:(id)a3;

@end
