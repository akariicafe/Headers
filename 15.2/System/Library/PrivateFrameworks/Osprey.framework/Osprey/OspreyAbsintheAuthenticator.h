@class NSString, OspreyConnectionPreferences, NSData, OspreyAuthService, NSDate, OspreyGRPCChannel;

@interface OspreyAbsintheAuthenticator : NSObject <OspreyDeviceAuthenticating> {
    OspreyGRPCChannel *_channel;
    OspreyAuthService *_authService;
    OspreyConnectionPreferences *_connectionPreferences;
    struct NACContextOpaque_ { } *_nacContext;
    NSDate *_sessionExpireOn;
}

@property (nonatomic) long long state;
@property (retain, nonatomic) NSData *sessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didMoveToState:(long long)a0;
- (unsigned long long)authenticationStrategyVersion;
- (void)willMoveToState:(long long)a0;
- (BOOL)_readyToSignClientData;
- (id)_signData:(id)a0;
- (void)_ensureAuthenticatedWithCompletion:(id /* block */)a0 failure:(id /* block */)a1;
- (void)_initializeAbsintheClientWithCertificateData:(id)a0 success:(id /* block */)a1 fail:(id /* block */)a2;
- (BOOL)isSessionInfoExpired;
- (void)signData:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (id)initWithChannel:(id)a0 connectionPreferences:(id)a1;

@end
