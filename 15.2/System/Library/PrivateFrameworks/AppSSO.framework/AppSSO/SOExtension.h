@class NSString, NSArray, NSUUID, SORemoteExtensionViewController, NSExtension, NSObject;
@protocol OS_dispatch_queue, SOExtensionDelegate;

@interface SOExtension : NSObject {
    NSUUID *_sessionID;
    NSObject<OS_dispatch_queue> *_queue;
    SORemoteExtensionViewController *_remoteViewController;
}

@property (retain, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) NSString *localizedExtensionDisplayName;
@property (readonly, nonatomic) NSString *containerAppPath;
@property (readonly, nonatomic) NSString *containerAppBundleIdentifier;
@property (retain, nonatomic) NSArray *associatedDomains;
@property (weak, nonatomic) id<SOExtensionDelegate> extensionDelegate;

- (void)unload;
- (void)beginAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)authorizationDidCompleteWithCredential:(id)a0 error:(id)a1;
- (id)initWithExtension:(id)a0;
- (void)finishAuthorizationWithCompletion:(id /* block */)a0;
- (id)_contextForSession;
- (void)_setupNonUISessionWithCompletion:(id /* block */)a0;
- (void)_setupSessionHelperForIOSWithCompletion:(id /* block */)a0;
- (void)_finishedSettingUpSession:(id)a0;
- (void)_setupNonUISessionIfNecessaryWithCompletion:(id /* block */)a0;
- (BOOL)hasURLApprovedAssociatedDomain:(id)a0;
- (void)_beginAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)checkAssociatedDomains;
- (void)setupNonUISessionWithCompletion:(id /* block */)a0;
- (id)description;
- (void)presentAuthorizationViewControllerWithHints:(id)a0 completion:(id /* block */)a1;
- (void)_finishAuthorizationWithCompletion:(id /* block */)a0;
- (BOOL)isEqualToExtension:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasAssociatedDomainsApproved;
- (void)_beginAuthorizationWithServiceXPCEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)_setupExtension;
- (void)_setupSessionWithCompletion:(id /* block */)a0;
- (void)beginAuthorizationWithServiceXPCEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)cancelAuthorizationWithCompletion:(id /* block */)a0;
- (void)_connectContextToSessionWithRequestIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_setupSessionIfNecessaryWithCompletion:(id /* block */)a0;
- (struct { unsigned int x0[8]; })auditTokenForSession;
- (void)requestAuthorizationViewControllerWithCompletion:(id /* block */)a0;

@end
