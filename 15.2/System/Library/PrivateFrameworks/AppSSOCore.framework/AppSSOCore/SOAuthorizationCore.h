@class SOAuthorizationRequestParametersCore, SOClient, NSDictionary, NSObject;
@protocol OS_dispatch_queue, SOAuthorizationCoreDelegate;

@interface SOAuthorizationCore : NSObject {
    SOClient *_client;
    SOAuthorizationRequestParametersCore *_requestParametersCore;
}

@property (retain) SOAuthorizationRequestParametersCore *requestParametersCore;
@property (weak) id<SOAuthorizationCoreDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateDispatchQueue;
@property (retain, nonatomic) NSDictionary *authorizationOptions;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL enableUserInteraction;

+ (BOOL)canPerformAuthorizationWithURL:(id)a0 responseCode:(long long)a1 useInternalExtensions:(BOOL)a2;
+ (BOOL)_canPerformAuthorizationWithURL:(id)a0 responseCode:(long long)a1 callerBundleIdentifier:(id)a2 useInternalExtensions:(BOOL)a3;
+ (BOOL)canPerformAuthorizationWithURL:(id)a0 responseCode:(long long)a1 callerBundleIdentifier:(id)a2 useInternalExtensions:(BOOL)a3;
+ (BOOL)_doAKshouldProcessURL:(id)a0;
+ (BOOL)canPerformAuthorizationWithURL:(id)a0 responseCode:(long long)a1;
+ (void)isExtensionProcessWithAuditToken:(struct { unsigned int x0[8]; })a0 completion:(id /* block */)a1;

- (void)beginAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)finishAuthorizationWithCompletion:(id /* block */)a0;
- (void)cancelAuthorization;
- (void)beginAuthorizationWithParameters:(id)a0 completion:(id /* block */)a1;
- (id)realms;
- (void)beginAuthorizationWithParameters:(id)a0;
- (void)beginAuthorizationWithOperation:(id)a0 url:(id)a1 httpHeaders:(id)a2 httpBody:(id)a3;
- (void)_cancelAuthorization;
- (id)createSecKeysFromSecKeyProxyEndpoints:(id)a0 error:(id *)a1;
- (void)getAuthorizationHintsWithURL:(id)a0 responseCode:(long long)a1 completion:(id /* block */)a2;
- (void)beginAuthorizationWithURL:(id)a0 httpHeaders:(id)a1 httpBody:(id)a2;
- (void)debugHintsWithCompletion:(id /* block */)a0;
- (void)_finishAuthorizationWithCredential:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_addNoUserInterfaceToAuthorizationOptionsInRequestParameters;
- (void)performBlockOnDelegateQueue:(id /* block */)a0;
- (id)debugDescription;

@end
