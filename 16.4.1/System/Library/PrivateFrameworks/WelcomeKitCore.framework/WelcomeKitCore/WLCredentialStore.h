@class WLAuthenticationCredentials, WLDeviceAuthentication;

@interface WLCredentialStore : NSObject {
    WLAuthenticationCredentials *_credentials;
    WLDeviceAuthentication *_authentication;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)credentialsForAuthentication:(id)a0;
- (id)currentAuthentication;
- (void)setCredentials:(id)a0 forAuthentication:(id)a1;

@end
