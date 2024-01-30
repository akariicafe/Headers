@class NSURLSession, NSString, NSTimer, NSMapTable;
@protocol HKOrganDonationConnectionManagerDelegate;

@interface HKOrganDonationConnectionManager : NSObject <NSURLSessionDataDelegate> {
    NSString *_refreshToken;
    BOOL _accessTokenStatus;
    long long _tokenRefreshRetryCount;
    NSMapTable *_taskQueue;
    long long _managerState;
}

@property (retain, nonatomic) NSURLSession *defaultSession;
@property (retain, nonatomic) NSString *refreshToken;
@property (retain, nonatomic) NSString *accessToken;
@property (weak, nonatomic) NSTimer *accessTokenInvalidationTimer;
@property (weak, nonatomic) id<HKOrganDonationConnectionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_host;
+ (id)_port;
+ (id)_scheme;
+ (long long)_hostConfiguration;
+ (id)_tokenWithIdentifier:(id)a0 shouldReturnData:(BOOL)a1;
+ (id)_gatewayHost;
+ (BOOL)_organDonationDisabled;
+ (id)_keychainQueryDictionaryForIdentifier:(id)a0;
+ (BOOL)isOrganDonationRegistrationAvailable;
+ (BOOL)hasStoredRegistrant;
+ (void)openDonateLifeMicroSiteInSafari;
+ (long long)registrationSubmissionHostConfiguration;
+ (void)refreshOrganDonationFeatureAvailability;
+ (void)organDonationSignificantDate:(id /* block */)a0;
+ (id)storeDemoModeModifiedDate;
+ (BOOL)shouldShowStoreDemoOrganDonation;

- (id)payload;
- (id)init;
- (void).cxx_destruct;
- (void)_transitionToState:(long long)a0;
- (void)cleanUp;
- (void)_refreshAccessTokenIfNeeded;
- (void)_sendQueuedTokenDependentRequests;
- (void)_flushTokenDependentRequestsWithStatus:(long long)a0;
- (id)_urlWithPath:(id)a0;
- (id)_registrationJWTWithRegistrant:(id)a0;
- (id)_jsonBodyPostRequestWithURL:(id)a0 method:(id)a1 postData:(id)a2 bearerToken:(id)a3;
- (void)_updateAccessTokenAndScheduleInvalidationTimer:(id)a0 expiresIn:(double)a1;
- (id)_genericJSONDataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)refreshBearerTokenWithRefreshToken:(id)a0 completion:(id /* block */)a1;
- (id)_refreshBearerTokenJWTWithRefreshToken:(id)a0;
- (id)_getRequestWithURL:(id)a0 bearerToken:(id)a1;
- (void)_scheduleAccessTokenDependentRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)_handleURLTaskError:(id)a0 withCompletion:(id /* block */)a1;
- (id)_jsonObjectWithData:(id)a0 response:(id)a1;
- (void)_handleServerErrorWithResponse:(id)a0 originRequest:(id)a1 payload:(id)a2 completion:(id /* block */)a3;
- (void)_invalidateAccessToken:(id)a0;
- (void)_upsertTokenInKeychain:(id)a0 identifier:(id)a1;
- (void)_deleteTokenWithIdentifier:(id)a0;
- (id)jwtPayloadWithRegistrant:(id)a0;
- (id)_jwtWithPayload:(id)a0 grantType:(id)a1;
- (id)jwtHeader;
- (id)_base64URLEncoding:(id)a0;
- (void)submitRegistrant:(id)a0 completion:(id /* block */)a1;
- (void)reloadRegistrantWithCompletion:(id /* block */)a0;
- (void)updateRegistrantWithParams:(id)a0 completion:(id /* block */)a1;
- (void)deleteRegistrantWithCompletion:(id /* block */)a0;
- (void)openRegisterMeSiteInSafariIfAuthenticated;

@end
