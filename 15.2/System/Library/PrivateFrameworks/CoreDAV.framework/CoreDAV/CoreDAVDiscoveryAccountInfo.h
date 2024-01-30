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
- (id)getAppleIDSession;
- (id)clientToken;
- (struct __CFURLStorageSession { } *)copyStorageSession;
- (void)clientTokenRequestedByServer;
- (BOOL)handleCertificateError:(id)a0;
- (id)oauthInfoProvider;
- (BOOL)shouldUseOpportunisticSockets;
- (BOOL)handleTrustChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldSendClientInfoHeaderForURL:(id)a0;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id /* block */)a0;
- (id)clientCertificateInfoProvider;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)a0;
- (BOOL)shouldRetryUnauthorizedTask:(id)a0;
- (BOOL)handleShouldUseCredentialStorage;
- (BOOL)shouldHandleHTTPCookiesForURL:(id)a0;
- (BOOL)shouldTurnModalOnBadPassword;
- (BOOL)shouldTryRenewingCredential;
- (BOOL)renewCredential;
- (id)initWithAccountInfoProvider:(id)a0;

@end
