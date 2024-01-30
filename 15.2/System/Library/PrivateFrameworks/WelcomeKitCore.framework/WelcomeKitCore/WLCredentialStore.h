@class WLAuthenticationCredentials, WLDeviceAuthentication;

@interface WLCredentialStore : NSObject {
    WLAuthenticationCredentials *_credentials;
    WLDeviceAuthentication *_authentication;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)currentAuthentication;
- (id)credentialsForAuthentication:(id)a0;
- (void)setCredentials:(id)a0 forAuthentication:(id)a1;

@end
