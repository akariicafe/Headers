@class NSString, LAContext, LAAuthorizationViewController;
@protocol LACustomPasswordControllerDelegate;

@interface LACustomPasswordController : UIViewController <LAAuthorizationViewControllerDelegate> {
    LAContext *_laContext;
    LAAuthorizationViewController *_authorizationController;
    id /* block */ _completion;
}

@property (weak, nonatomic) id<LACustomPasswordControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)modalPresentationStyle;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (long long)preferredStatusBarStyle;
- (long long)modalTransitionStyle;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)authorizationController:(id)a0 didProvideAuthorizationRequirementWithReply:(id /* block */)a1;

@end
