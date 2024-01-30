@class SKUIClientContext, UIViewController;

@interface SKUIExplicitRestrictionAlertController : NSObject {
    SKUIClientContext *_clientContext;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
- (void)presentExplicitRestrictionAlertIfNeededOfType:(long long)a0 completionBlock:(id /* block */)a1;
- (id)initWithClientContext:(id)a0;
- (id)initWithClientContext:(id)a0 presentingViewController:(id)a1;

@end
