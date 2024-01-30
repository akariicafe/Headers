@class NSDictionary, UIViewController;
@protocol CDPStateUIProvider, AASignOutFlowControllerDelegate, AASignInFlowControllerDelegate;

@interface AIDAServiceContext : NSObject <NSMutableCopying, NSCopying>

@property (readonly, copy, nonatomic) NSDictionary *authenticationResults;
@property (readonly, nonatomic) BOOL shouldForceOperation;
@property (readonly, nonatomic) long long operationUIPermissions;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) NSDictionary *signInContexts;
@property (readonly, nonatomic) NSDictionary *signOutContexts;
@property (readonly, nonatomic) id<AASignInFlowControllerDelegate> aaSignInFlowControllerDelegate;
@property (readonly, nonatomic) id<AASignOutFlowControllerDelegate> aaSignOutFlowControllerDelegate;
@property (readonly, weak, nonatomic) id<CDPStateUIProvider> cdpUiProvider;

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)contextWithContext:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
