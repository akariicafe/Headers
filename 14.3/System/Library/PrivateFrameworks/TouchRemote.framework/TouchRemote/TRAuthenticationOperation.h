@class NSSet, UIViewController;

@interface TRAuthenticationOperation : TROperation

@property (retain, nonatomic) NSSet *targetedServices;
@property (nonatomic) BOOL shouldIgnoreAuthFailures;
@property (nonatomic) BOOL shouldForceInteractiveAuth;
@property (retain, nonatomic) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (void)execute;

@end
