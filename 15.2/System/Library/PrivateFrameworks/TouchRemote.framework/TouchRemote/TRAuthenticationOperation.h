@class NSSet, UIViewController;

@interface TRAuthenticationOperation : TROperation

@property (retain, nonatomic) NSSet *targetedServices;
@property (nonatomic) BOOL shouldIgnoreAuthFailures;
@property (nonatomic) BOOL shouldForceInteractiveAuth;
@property (nonatomic) BOOL shouldUseAIDA;
@property (retain, nonatomic) UIViewController *presentingViewController;

- (void)execute;
- (void).cxx_destruct;

@end
