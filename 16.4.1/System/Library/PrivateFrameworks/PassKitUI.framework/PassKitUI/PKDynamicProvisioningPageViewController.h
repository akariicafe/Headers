@class NSString, UIImage, PKDynamicProvisioningPageContent;

@interface PKDynamicProvisioningPageViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKViewControllerPreflightable> {
    UIImage *_heroImage;
}

@property (readonly, nonatomic) PKDynamicProvisioningPageContent *page;
@property (copy, nonatomic) id /* block */ primaryButtonAction;
@property (copy, nonatomic) id /* block */ secondaryButtonAction;
@property (copy, nonatomic) id /* block */ bodyButtonAction;
@property (copy, nonatomic) id /* block */ cancelButtonAction;
@property (copy, nonatomic) id /* block */ doneButtonAction;
@property (copy, nonatomic) id /* block */ linkAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)explanationViewControllerDidSelectCancel:(id)a0;
- (void)explanationViewControllerDidSelectDone:(id)a0;
- (void)explanationViewDidSelectBodyButton:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithPage:(id)a0 context:(long long)a1;

@end
