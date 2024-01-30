@class NSSet, UIViewController, NSString;

@interface TRAuthenticationOperation : TROperation

@property (retain, nonatomic) NSSet *targetedServices;
@property (nonatomic) BOOL shouldIgnoreAuthFailures;
@property (nonatomic) BOOL shouldForceInteractiveAuth;
@property (nonatomic) BOOL shouldUseAIDA;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (nonatomic) BOOL isCLIMode;
@property (retain, nonatomic) NSString *rawPassword;

- (void)execute;
- (void).cxx_destruct;

@end
