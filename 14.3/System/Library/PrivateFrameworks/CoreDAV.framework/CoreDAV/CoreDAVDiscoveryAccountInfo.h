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

- (id)getAppleIDSession;
- (BOOL)shouldSendClientInfoHeaderForURL:(id)a0;
- (BOOL)renewCredential;
- (void).cxx_destruct;
- (id)clientToken;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id /* block */)a0;
- (id)clientCertificateInfoProvider;
- (BOOL)handleTrustChallenge:(id)a0 withConnection:(id)a1;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)a0;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)a0 withConnection:(id)a1;
- (BOOL)shouldRetryUnauthorizedConnection:(id)a0;
- (BOOL)handleShouldUseCredentialStorage;
- (BOOL)shouldHandleHTTPCookiesForURL:(id)a0;
- (BOOL)shouldTurnModalOnBadPassword;
- (BOOL)shouldTryRenewingCredential;
- (struct __CFURLStorageSession { } *)copyStorageSession;
- (id)url;
- (void)clientTokenRequestedByServer;
- (BOOL)handleCertificateError:(id)a0;
- (id)additionalHeaderValues;
- (id)oauthInfoProvider;
- (BOOL)shouldUseOpportunisticSockets;
- (BOOL)handleTrustChallenge:(id)a0;
- (id)initWithAccountInfoProvider:(id)a0;

@end
