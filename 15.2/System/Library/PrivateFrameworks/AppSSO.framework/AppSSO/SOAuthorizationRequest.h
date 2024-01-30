@class NSData, NSString, NSArray, NSURL, NSError, SOAuthorizationRequestParameters, NSDictionary, SORemoteExtensionContext, SOAuthorizationCredential;

@interface SOAuthorizationRequest : NSObject {
    SOAuthorizationRequestParameters *_requestParameters;
    SORemoteExtensionContext *_remoteExtensionContext;
}

@property (nonatomic, getter=isAuthorizationCanceled) BOOL authorizationCanceled;
@property (retain, nonatomic) SOAuthorizationCredential *canceledAuthorizationCredential;
@property (retain, nonatomic) NSError *canceledAuthorizationError;
@property (retain, nonatomic) NSArray *secKeyProxies;
@property (nonatomic) int secKeyProxiesConnectedClients;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *requestedOperation;
@property (retain, nonatomic) NSDictionary *httpHeaders;
@property (retain, nonatomic) NSData *httpBody;
@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) NSDictionary *extensionData;
@property (retain, nonatomic) NSString *callerBundleIdentifier;
@property (retain, nonatomic) NSData *auditTokenData;
@property (retain, nonatomic) NSDictionary *authorizationOptions;
@property (nonatomic, getter=isCFNetworkInterception, setter=setCFNetworkInterception:) BOOL cfNetworkInterception;
@property (nonatomic, getter=isCallerManaged) BOOL callerManaged;
@property (retain, nonatomic) NSString *callerTeamIdentifier;
@property (retain, nonatomic) NSString *localizedCallerDisplayName;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL enableUserInteraction;
@property (copy, nonatomic) NSString *impersonationBundleIdentifier;

- (void)complete;
- (void).cxx_destruct;
- (void)completeWithError:(id)a0;
- (void)cancel;
- (id)_hostExtensionContext;
- (id)initWithRequestParameters:(id)a0 remoteExtensionContext:(id)a1;
- (id)_createSecKeyProxiesForSecKeys:(id)a0 error:(id *)a1;
- (BOOL)_isUserInterfaceAllowed;
- (void)_completeFinishAuthorizationWithError:(id)a0;
- (void)doNotHandle;
- (void)completeWithHTTPAuthorizationHeaders:(id)a0;
- (void)completeWithHTTPResponse:(id)a0 httpBody:(id)a1;
- (void)completeWithAuthorizationResult:(id)a0;
- (void)presentAuthorizationViewControllerWithCompletion:(id /* block */)a0;

@end
