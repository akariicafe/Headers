@class SOAuthorizationRequestParameters, NSString, NSDictionary, NSURL, NSError, SOAuthorizationCredential, NSData;
@protocol SOHostExtensionContextProtocol;

@interface SOAuthorizationRequest : NSObject {
    SOAuthorizationRequestParameters *_requestParameters;
    id<SOHostExtensionContextProtocol> _hostExtensionContext;
}

@property (nonatomic, getter=isAuthorizationCanceled) BOOL authorizationCanceled;
@property (retain, nonatomic) SOAuthorizationCredential *canceledAuthorizationCredential;
@property (retain, nonatomic) NSError *canceledAuthorizationError;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *requestedOperation;
@property (retain, nonatomic) NSDictionary *httpHeaders;
@property (retain, nonatomic) NSData *httpBody;
@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) NSDictionary *extensionData;
@property (retain, nonatomic) NSString *callerBundleIdentifier;
@property (retain, nonatomic) NSData *auditTokenData;
@property (retain, nonatomic) NSDictionary *authorizationOptions;
@property (nonatomic, getter=isCallerManaged) BOOL callerManaged;
@property (retain, nonatomic) NSString *callerTeamIdentifier;
@property (retain, nonatomic) NSString *localizedCallerDisplayName;

- (void)cancel;
- (void).cxx_destruct;
- (void)complete;
- (id)initWithRequestParameters:(id)a0 hostExtensionContext:(id)a1;
- (BOOL)_isUserInterfaceAllowed;
- (void)doNotHandle;
- (void)completeWithHTTPAuthorizationHeaders:(id)a0;
- (void)completeWithHTTPResponse:(id)a0 httpBody:(id)a1;
- (void)presentAuthorizationViewControllerWithCompletion:(id /* block */)a0;
- (void)completeWithError:(id)a0;

@end
