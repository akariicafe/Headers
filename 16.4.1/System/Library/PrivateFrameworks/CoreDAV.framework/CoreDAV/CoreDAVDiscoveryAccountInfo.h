@class NSString, NSDictionary, NSData, NSURL, NSSet, NSError;
@protocol CoreDAVAccountInfoProvider;

@interface CoreDAVDiscoveryAccountInfo : NSObject <CoreDAVAccountInfoProvider>

@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSString *serverRoot;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *user;
@property (nonatomic) long long port;
@property (retain, nonatomic) NSData *identityPersist;
@property (retain, nonatomic) NSString *scheme;
@property (retain, nonatomic) NSURL *principalURL;
@property (retain, nonatomic) NSString *accountID;
@property (retain, nonatomic) NSDictionary *serverHeaders;
@property (retain, nonatomic) NSSet *serverComplianceClasses;
@property (retain, nonatomic) NSString *userAgentHeader;
@property (nonatomic) BOOL shouldFailAllTasks;
@property (nonatomic) BOOL started;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) id<CoreDAVAccountInfoProvider> backingAccountInfoProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)additionalHeaderValues;
- (id)url;
- (void).cxx_destruct;
- (id)clientToken;
- (void)clientTokenRequestedByServer;
- (struct __CFURLStorageSession { } *)copyStorageSession;
- (id)customConnectionProperties;
- (id)getAppleIDSession;
- (BOOL)handleCertificateError:(id)a0;
- (BOOL)handleTrustChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (id)oauthInfoProvider;
- (BOOL)shouldUseOpportunisticSockets;
- (BOOL)renewCredential;
- (id)clientCertificateInfoProvider;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)a0;
- (BOOL)handleShouldUseCredentialStorage;
- (id)initWithAccountInfoProvider:(id)a0;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id /* block */)a0;
- (BOOL)shouldHandleHTTPCookiesForURL:(id)a0;
- (BOOL)shouldRetryUnauthorizedTask:(id)a0;
- (BOOL)shouldSendClientInfoHeaderForURL:(id)a0;
- (BOOL)shouldTryRenewingCredential;
- (BOOL)shouldTurnModalOnBadPassword;

@end
