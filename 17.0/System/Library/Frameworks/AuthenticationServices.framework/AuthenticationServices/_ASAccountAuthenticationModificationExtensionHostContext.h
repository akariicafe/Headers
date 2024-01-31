@class NSString;
@protocol _ASAccountAuthenticationModificationExtensionHostContextDelegate;

@interface _ASAccountAuthenticationModificationExtensionHostContext : NSExtensionContext <_ASAccountAuthenticationModificationExtensionHostContextProtocol, _ASExtensionHostContext>

@property (weak, nonatomic) id<_ASAccountAuthenticationModificationExtensionHostContextDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (void)dismissRequestUI;
- (void)getSignInWithAppleAuthorizationWithState:(id)a0 nonce:(id)a1 completion:(id /* block */)a2;
- (void)prepareToCancelRequestWithError:(id)a0 completion:(id /* block */)a1;
- (void)prepareToCompleteRequestWithUpdatedCredential:(id)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)prepareToCompleteUpgradeToSignInWithAppleWithUserInfo:(id)a0 completion:(id /* block */)a1;

@end
