@class NSString, SFStepperView;
@protocol _SFSettingsAlertStepperController;

@interface StepperViewController : UIViewController <_SFSettingsAlertStepperConfiguration, UIViewControllerTransitioningDelegate> {
    SFStepperView *_stepperView;
}

@property (retain, nonatomic) id<_SFSettingsAlertStepperController> stepperController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void).cxx_destruct;
- (void)loadView;
- (void)setEnabled:(BOOL)a0 forButton:(long long)a1;
- (void)setImage:(id)a0 forButton:(long long)a1;
- (void)setText:(id)a0 forButton:(long long)a1;
- (id)_buttonForStepperButton:(long long)a0;
- (id)initWithStepperController:(id)a0;

@end
