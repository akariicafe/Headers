@class NSString;

@interface ASAuthorizationAppleIDProvider : NSObject <AKAuthorizationNotificationHandler, ASAuthorizationProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)credentialStateDidChange:(long long)a0 completion:(id /* block */)a1;
- (id)createRequest;
- (void)getCredentialStateForUserID:(id)a0 completion:(id /* block */)a1;

@end
