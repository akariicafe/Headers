@interface WorkflowEditor.SummaryModal : NSObject <UIPopoverPresentationControllerDelegate> {
    void /* unknown type, empty encoding */ isPopoverInCompactWidth;
    void /* unknown type, empty encoding */ dismissBehavior;
    void /* unknown type, empty encoding */ onDismiss;
    void /* unknown type, empty encoding */ viewController;
}

- (void)presentationControllerDidDismiss:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
