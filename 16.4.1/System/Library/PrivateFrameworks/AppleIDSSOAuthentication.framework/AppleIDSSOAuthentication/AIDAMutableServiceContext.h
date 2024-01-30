@class NSDictionary, UIViewController;
@protocol CDPStateUIProvider, AASignOutFlowControllerDelegate, AASignInFlowControllerDelegate;

@interface AIDAMutableServiceContext : AIDAServiceContext

@property (copy, nonatomic) NSDictionary *authenticationResults;
@property (nonatomic) BOOL shouldForceOperation;
@property (nonatomic) long long operationUIPermissions;
@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) NSDictionary *signInContexts;
@property (retain, nonatomic) NSDictionary *signOutContexts;
@property (retain, nonatomic) id<AASignInFlowControllerDelegate> aaSignInFlowControllerDelegate;
@property (retain, nonatomic) id<AASignOutFlowControllerDelegate> aaSignOutFlowControllerDelegate;
@property (weak, nonatomic) id<CDPStateUIProvider> cdpUiProvider;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
