@class WFDialogAttribution, WFAlertButton;

@interface WFSecureConfirmationAlert : WFAlert

@property (readonly, nonatomic) WFAlertButton *cancelButton;
@property (readonly, nonatomic) WFAlertButton *continueButton;
@property (copy, nonatomic) id /* block */ cancellationHandler;
@property (copy, nonatomic) id /* block */ failureHandler;
@property (copy, nonatomic) id /* block */ successHandler;
@property (retain, nonatomic) WFDialogAttribution *attribution;

- (id)buttons;
- (id)init;
- (void).cxx_destruct;
- (id)configuredCancelButton;
- (id)configuredContinueButton;

@end
