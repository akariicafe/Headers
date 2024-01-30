@class UIStackView, NSArray, UITextField, NSString, HUSetupCodeFieldItem;
@protocol HUSetupCodeFieldDelegate;

@interface HUSetupCodeField : UIView <UITextFieldDelegate>

@property (weak, nonatomic) HUSetupCodeFieldItem *activeItem;
@property (retain, nonatomic) UITextField *hiddenInputField;
@property (retain, nonatomic) UIStackView *codeFieldItemsView;
@property (weak, nonatomic) id<HUSetupCodeFieldDelegate> delegate;
@property (readonly, nonatomic) NSArray *items;
@property (nonatomic) double itemSpacing;
@property (readonly, nonatomic) NSString *setupCode;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCodeDigits:(unsigned long long)a0;
- (void)_updateInterfaceForCurrentTraitCollection;
- (void)_setupCodeFieldItems;
- (void)fieldTapped:(id)a0;
- (void)showKeypad;
- (void)_activateNext;
- (void)_activateLast;
- (void)hideKeypad;

@end
