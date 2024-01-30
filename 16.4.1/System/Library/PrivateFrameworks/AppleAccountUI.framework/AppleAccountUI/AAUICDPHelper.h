@class UIViewController;

@interface AAUICDPHelper : NSObject

@property (nonatomic) BOOL forceInline;
@property (readonly, weak, nonatomic) UIViewController *presentingViewController;

+ (BOOL)isWalrusEnabled;
+ (id)cdpContextForAccount:(id)a0;
+ (id)cdpContextForPrimaryAccount;
+ (id)cdpContextForPrimaryAccountWithAuthenticationResults:(id)a0;
+ (id)helperWithPresenter:(id)a0;

- (void).cxx_destruct;
- (id)cdpStateControllerForPrimaryAccount;
- (id)cdpStateControllerWithContext:(id)a0;

@end
