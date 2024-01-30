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

- (struct { unsigned int x0[8]; })auditTokenForSession;
- (void)_beginAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)_setupSessionWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)hasURLApprovedAssociatedDomain:(id)a0;
- (BOOL)hasAssociatedDomainsApproved;
- (BOOL)isEqualToExtension:(id)a0;
- (void)_setupSessionHelperForIOSWithCompletion:(id /* block */)a0;
- (void)_connectContextToSessionWithRequestIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_setupSessionIfNecessaryWithCompletion:(id /* block */)a0;
- (void)unload;
- (void)authorizationDidCompleteWithCredential:(id)a0 error:(id)a1;
- (id)_contextForSession;
- (id)description;
- (void)requestAuthorizationViewControllerWithCompletion:(id /* block */)a0;
- (void)checkAssociatedDomains;
- (void)_finishedSettingUpSession:(id)a0;
- (void)presentAuthorizationViewControllerWithHints:(id)a0 completion:(id /* block */)a1;
- (BOOL)isEqual:(id)a0;
- (void)cancelAuthorizationWithCompletion:(id /* block */)a0;
- (id)initWithExtension:(id)a0;
- (void)_beginAuthorizationWithServiceXPCEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)_setupExtension;
- (void)beginAuthorizationWithServiceXPCEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)beginAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;

@end
