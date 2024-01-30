@class NSDictionary, ACAccount, AKAppleIDAuthenticationController;
@protocol AARemoteServerProtocol;

@interface AATermsUserActionReporter : NSObject {
    ACAccount *_account;
    NSDictionary *_requestDictionary;
    AKAppleIDAuthenticationController *_authController;
    unsigned long long _requestCount;
    id<AARemoteServerProtocol> _remoteServer;
}

- (void)_createRequestForAccount:(id)a0 requestHandler:(id /* block */)a1;
- (id)_authController;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 parameters:(id)a1;
- (id)initWithAccount:(id)a0 parameters:(id)a1 remoteServer:(id)a2;
- (void)reportEvent;

@end
