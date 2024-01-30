@class UIStackView, NSString, NSArray, SFDialogView, SFDialogTextField, SFDialogTextView, UIButton, NSLayoutConstraint, UITableView;

@interface SFDialogContentView : UIView <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray *_actionButtons;
    UIStackView *_actionButtonsView;
    UIButton *_closeButton;
    unsigned long long _actionIndexTriggeredByOptionReturnKey;
    unsigned long long _actionIndexTriggeredByEscapeKey;
    unsigned long long _actionIndexTriggeredByReturnKey;
    BOOL _hasAttemptedHardwareKeyboardFocus;
    SFDialogTextField *_inputTextField;
    NSArray *_layoutConstraintsWhenInputIsVisible;
    NSArray *_layoutConstraintsWhenPasswordIsVisible;
    NSArray *_layoutConstraintsWhenInputAndPasswordAreVisible;
    SFDialogTextView *_messageTextView;
    SFDialogTextField *_passwordTextField;
    NSLayoutConstraint *_actionButtonsLeadingConstraintForHorizontalStackAlignment;
    NSLayoutConstraint *_actionButtonsLeadingConstraintForVerticalStackAlignment;
    UITableView *_tableView;
    NSArray *_tableData;
    id /* block */ _tableDidSelectRowAction;
    long long _selectedRow;
    NSArray *_layoutConstraintsWhenTableViewIsVisible;
    NSLayoutConstraint *_tableViewHeightConstraint;
}

@property (weak, nonatomic) SFDialogView *dialogView;
@property (copy, nonatomic) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithCoder:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitleText:(id)a0;
- (void)didAppear;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;
- (id)keyCommands;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)endEditing;
- (void).cxx_destruct;
- (BOOL)_wantsPriorityOverFocusUpdates;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)setMessageText:(id)a0;
- (void)_actionTriggered:(id)a0;
- (double)_desiredButtonsWidth;
- (void)_escapeAction:(id)a0;
- (void)_focusInputTextField:(id)a0;
- (void)_invokeDelegateWithSelectedIndex:(unsigned long long)a0;
- (void)_optionReturnAction:(id)a0;
- (void)_returnAction:(id)a0;
- (void)_setText:(id)a0 placeholder:(id)a1 forTextField:(id)a2;
- (void)_updateActionButtons;
- (BOOL)_usesLoginFormAppearance;
- (void)setInputText:(id)a0 placeholder:(id)a1;
- (void)setPasswordText:(id)a0 placeholder:(id)a1;
- (void)setTableViewRows:(id)a0 didSelectRowAction:(id /* block */)a1;

@end
