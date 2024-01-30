@class NSData, NSString, NSError, NSArray, NSDictionary, NSURLResponse, NSMutableData, NSMutableURLRequest, NSURLConnection;

@interface CTCellularPlanRequest : NSObject <NSURLConnectionDataDelegate> {
    int nextConnectionTypeIndex;
    NSArray *_responseCookies;
    NSArray *_requestCookies;
    NSDictionary *_internetSettings;
    NSDictionary *_bootstrapSettings;
}

@property (nonatomic) struct dispatch_queue_s { } *queue;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSURLConnection *connection;
@property (retain, nonatomic) NSMutableData *receivedData;
@property (retain, nonatomic) NSMutableURLRequest *request;
@property (retain, nonatomic) NSURLResponse *response;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) NSData *serializedCookies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)plansRequestWithSignIdMap:(id)a0 renewalIccid:(id)a1 urls:(id)a2;
+ (void)setRequestUrls:(id)a0;
+ (id)requestHandoffTokenWithSignIdMap:(id)a0 urls:(id)a1;
+ (id)createSessionRequest;
+ (id)newPurchaseWithSessionId:(id)a0 receipt:(id)a1 userId:(id)a2 userName:(id)a3;
+ (id)loadPlansRequestWithUrl:(id)a0 postData:(id)a1;
+ (void)setBootstrapConnectionSettings:(id)a0;
+ (id)connectionSettingsForServiceType:(long long)a0;
+ (id)subscriptionDetailsRequestWithIccids:(id)a0 signIdMap:(id)a1 urls:(id)a2;
+ (void)setInternetConnectionSettings:(id)a0;
+ (BOOL)isRetriableErrorCode:(long long)a0;
+ (id)newInitiatePurchaseWithSessionId:(id)a0 planId:(id)a1;

- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)_callback;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)dealloc;
- (BOOL)_isRetryableError:(id)a0;
- (void)cancel;
- (void)startRequestWithReplyQueue:(struct dispatch_queue_s { } *)a0 completion:(id /* block */)a1;
- (id)_initWithUrl:(id)a0 httpMethod:(id)a1 httpHeaders:(id)a2 httpBody:(id)a3 internetSettings:(id)a4 bootstrapSettings:(id)a5;
- (BOOL)_canTryAnotherConnectionType;
- (id)_connectionSettingsForNextConnectionType;
- (void)_startRequestWithNextConnectionTypeOrFail;
- (id)initWithUrl:(id)a0 httpMethod:(id)a1 httpHeaders:(id)a2 httpBody:(id)a3;
- (id)initGetWithUrl:(id)a0;
- (id)initPostWithUrl:(id)a0;
- (id)initJsonPostWithUrl:(id)a0 jsonData:(id)a1;
- (id)initJsonPostWithUrl:(id)a0 jsonData:(id)a1 internetSettings:(id)a2 bootstrapSettings:(id)a3;

@end
