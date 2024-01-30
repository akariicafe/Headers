@interface NewsEngagement.EngagementViewControllerFactory : NSObject <UIPopoverPresentationControllerDelegate, AMSUIMessageViewControllerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ placementKey;
    void /* unknown type, empty encoding */ identifierKey;
    void /* unknown type, empty encoding */ sourceKey;
    void /* unknown type, empty encoding */ messageIDKey;
    void /* unknown type, empty encoding */ offerKey;
}

- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)messageViewController:(id)a0 didSelectActionWithDialogResult:(id)a1;
- (void)messageViewController:(id)a0 didUpdateSize:(struct CGSize { double x0; double x1; })a1;
- (void)messageViewController:(id)a0 didFailWithError:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
