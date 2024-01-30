@interface NewsSubscription.DismissibleDynamicViewController : UINavigationController <UIAdaptivePresentationControllerDelegate> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ dismissDelegate;
}

- (void)presentationControllerDidDismiss:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithRootViewController:(id)a0;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (void).cxx_destruct;

@end
