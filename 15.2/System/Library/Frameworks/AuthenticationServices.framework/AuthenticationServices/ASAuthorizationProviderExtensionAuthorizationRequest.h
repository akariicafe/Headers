@class NSString, SOAuthorizationRequest, NSURL, NSDictionary, NSData;

@interface ASAuthorizationProviderExtensionAuthorizationRequest : NSObject

@property (readonly, nonatomic) SOAuthorizationRequest *authorizationRequest;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *requestedOperation;
@property (readonly, nonatomic) NSDictionary *httpHeaders;
@property (readonly, nonatomic) NSData *httpBody;
@property (readonly, copy, nonatomic) NSString *realm;
@property (readonly, nonatomic) NSDictionary *extensionData;
@property (readonly, copy, nonatomic) NSString *callerBundleIdentifier;
@property (readonly, nonatomic) NSDictionary *authorizationOptions;
@property (readonly, nonatomic, getter=isCallerManaged) BOOL callerManaged;
@property (readonly, nonatomic) NSString *callerTeamIdentifier;
@property (readonly, nonatomic) NSString *localizedCallerDisplayName;

- (void)complete;
- (void).cxx_destruct;
- (void)completeWithError:(id)a0;
- (void)cancel;
- (id)initWithAuthorizationRequest:(id)a0;
- (void)doNotHandle;
- (void)completeWithHTTPAuthorizationHeaders:(id)a0;
- (void)completeWithHTTPResponse:(id)a0 httpBody:(id)a1;
- (void)completeWithAuthorizationResult:(id)a0;
- (void)presentAuthorizationViewControllerWithCompletion:(id /* block */)a0;

@end
