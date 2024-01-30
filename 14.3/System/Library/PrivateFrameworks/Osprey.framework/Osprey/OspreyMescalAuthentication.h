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

- (void).cxx_destruct;
- (unsigned long long)state;
- (id)mescalSession;
- (unsigned long long)authenticationStrategyVersion;
- (void)signData:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (id)initWithChannel:(id)a0 connectionPreferences:(id)a1;
- (void)_continuePreparationWithCompletion:(id /* block */)a0;
- (void)moveToState:(unsigned long long)a0;
- (BOOL)isSessionExpired;

@end
