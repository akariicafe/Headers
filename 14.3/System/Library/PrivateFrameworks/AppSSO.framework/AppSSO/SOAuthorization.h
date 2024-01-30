@class NSString, NSDictionary, SOExtension, SOAuthorizationCore, NSObject, SORemoteExtensionViewController;
@protocol OS_dispatch_queue, SOAuthorizationDelegate;

@interface SOAuthorization : NSObject <SOExtensionDelegate, SOUIAuthorizationViewControllerDelegate> {
    SOAuthorizationCore *_authorizationCore;
    SOExtension *_extension;
    SORemoteExtensionViewController *_extensionViewController;
    id /* block */ _pendingFinishAuthorizationBlock;
}

@property (weak) id<SOAuthorizationDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateDispatchQueue;
@property (retain, nonatomic) NSDictionary *authorizationOptions;
@property (nonatomic) BOOL enableEmbeddedAuthorizationViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPerformAuthorizationWithURL:(id)a0 responseCode:(long long)a1 useInternalExtensions:(BOOL)a2;
+ (BOOL)canPerformAuthorizationWithURL:(id)a0 responseCode:(long long)a1;

- (void)applicationDidBecomeActive:(id)a0;
- (void)cancelAuthorization;
- (void)_extensionCleanup;
- (id)init;
- (void)beginAuthorizationWithParameters:(id)a0;
- (void).cxx_destruct;
- (void)_finishAuthorizationWithCredential:(id)a0 error:(id)a1;
- (void)debugHintsWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)_applicationActivationWithTimeout:(BOOL)a0;
- (void)beginAuthorizationWithURL:(id)a0 httpHeaders:(id)a1 httpBody:(id)a2;
- (id)realms;
- (void)getAuthorizationHintsWithURL:(id)a0 responseCode:(long long)a1 completion:(id /* block */)a2;
- (void)authorizationDidCompleteWithCredential:(id)a0 error:(id)a1;
- (void)_cancelAuthorization;
- (void)viewControllerDidCancel:(id)a0;
- (void)presentAuthorizationViewControllerWithHints:(id)a0 completion:(id /* block */)a1;
- (void)beginAuthorizationWithOperation:(id)a0 url:(id)a1 httpHeaders:(id)a2 httpBody:(id)a3;

@end
