@class NSString, OBBoldTrayButton, UIButton;

@interface DMCEnrollmentConfirmationView : UIView

@property (retain, nonatomic) NSString *confirmationText;
@property (retain, nonatomic) OBBoldTrayButton *confirmationButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (copy, nonatomic) id /* block */ confirmationAction;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (nonatomic) BOOL inProgress;
@property (nonatomic, getter=isConfirmationButtonEnabled) BOOL confirmationButtonEnabled;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)cancelButtonTapped:(id)a0;
- (id)initWithConfirmationText:(id)a0 cancelText:(id)a1 confirmationAction:(id /* block */)a2 cancelAction:(id /* block */)a3;
- (void)confirmationButtonTapped:(id)a0;

@end
