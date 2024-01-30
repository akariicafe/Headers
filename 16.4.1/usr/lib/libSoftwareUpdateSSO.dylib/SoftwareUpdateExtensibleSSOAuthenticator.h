@class ASAuthorizationController, NSString, NSDictionary;
@protocol SoftwareUpdateExtensibleSSOAuthenticatorDelegate;

@interface SoftwareUpdateExtensibleSSOAuthenticator : NSObject <ASAuthorizationControllerDelegate>

@property (retain, nonatomic) ASAuthorizationController *authenticationController;
@property (weak, nonatomic) id<SoftwareUpdateExtensibleSSOAuthenticatorDelegate> delegate;
@property (retain, nonatomic) NSString *appIdentifier;
@property (retain, nonatomic) NSString *envIdentifier;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *interactivity;
@property (retain, nonatomic) NSDictionary *otherParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)authorizationController:(id)a0 didCompleteWithAuthorization:(id)a1;
- (void)authorizationController:(id)a0 didCompleteWithError:(id)a1;
- (void)authenticate;
- (BOOL)authenticationSupported;
- (id)copyQueryItemsWithParameters:(id)a0;

@end
