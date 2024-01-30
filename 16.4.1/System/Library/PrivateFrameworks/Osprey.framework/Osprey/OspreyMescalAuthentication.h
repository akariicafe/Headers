@class OspreyGRPCChannel, NSString, OspreyConnectionPreferences, NSData, OspreyAuthService, NSDate, OspreyMescalSession;

@interface OspreyMescalAuthentication : NSObject <OspreyDeviceAuthenticating> {
    OspreyMescalSession *_mescalSession;
    OspreyAuthService *_authService;
    OspreyConnectionPreferences *_connectionPreferences;
    OspreyGRPCChannel *_grpcChannel;
    unsigned long long _state;
    NSDate *_sessionExpiration;
    NSData *_certificateData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)state;
- (void).cxx_destruct;
- (void)_continuePreparationWithCompletion:(id /* block */)a0;
- (unsigned long long)authenticationStrategyVersion;
- (id)initWithChannel:(id)a0 connectionPreferences:(id)a1;
- (BOOL)isSessionExpired;
- (id)mescalSession;
- (void)moveToState:(unsigned long long)a0;
- (void)signData:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;

@end
