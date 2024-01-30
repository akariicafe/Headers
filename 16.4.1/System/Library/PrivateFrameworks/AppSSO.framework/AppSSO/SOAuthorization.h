@class SOUIAuthorizationViewController, NSString, NSDictionary, SOExtension, SOAuthorizationCore, NSObject, SORemoteExtensionViewController;
@protocol OS_dispatch_queue, SOAuthorizationDelegate;

@interface SOAuthorization : NSObject <SOExtensionDelegate, SOUIAuthorizationViewControllerDelegate> {
    SOAuthorizationCore *_authorizationCore;
    SOExtension *_extension;
    SORemoteExtensionViewController *_extensionViewController;
    SOUIAuthorizationViewController *_authorizationViewController;
    id /* block */ _pendingFinishAuthorizationBlock;
}

@property (class, retain) NSString *originatorBundleIdentifier;

@property (weak) id<SOAuthorizationDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateDispatchQueue;
@property (retain, nonatomic) NSDictionary *authorizationOptions;
@property (nonatomic) BOOL enableEmbeddedAuthorizationViewController;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL enableUserInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPerformAuthorizationWithURL:(id)a0 responseCode:(long long)a1 useInternalExtensions:(BOOL)a2;
+ (BOOL)canPerformAuthorizationWithURL:(id)a0 responseCode:(long long)a1 callerBundleIdentifier:(id)a2 useInternalExtensions:(BOOL)a3;
+ (BOOL)canPerformAuthorizationWithURL:(id)a0 responseCode:(long long)a1;
+ (void)isExtensionProcessWithAuditToken:(struct { unsigned int x0[8]; })a0 completion:(id /* block */)a1;

- (void)applicationDidBecomeActive:(id)a0;
- (void)debugHintsWithCompletion:(id /* block */)a0;
- (void)authorization:(id)a0 didCompleteWithCredential:(id)a1 error:(id)a2;
- (void)dealloc;
- (void)getAuthorizationHintsWithURL:(id)a0 responseCode:(long long)a1 completion:(id /* block */)a2;
- (id)init;
- (id)realms;
- (void).cxx_destruct;
- (void)presentAuthorizationViewControllerWithHints:(id)a0 requestIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)_cancelAuthorization;
- (void)beginAuthorizationWithURL:(id)a0 httpHeaders:(id)a1 httpBody:(id)a2;
- (void)cancelAuthorization;
- (void)beginAuthorizationWithOperation:(id)a0 url:(id)a1 httpHeaders:(id)a2 httpBody:(id)a3;
- (void)beginAuthorizationWithParameters:(id)a0;
- (id)kerberosProfiles;
- (void)_applicationActivationWithTimeout:(BOOL)a0;
- (void)_extensionCleanup;
- (void)_finishAuthorization:(id)a0 completion:(id /* block */)a1;
- (void)_finishAuthorizationWithCredential:(id)a0 error:(id)a1;
- (void)viewControllerDidCancel:(id)a0;

@end
