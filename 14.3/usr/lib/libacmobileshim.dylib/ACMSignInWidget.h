@class UITableViewCell, NSString, UIView, NSDictionary, UITableView, UITextField, UILabel, UIColor;
@protocol ACMSignInWidgetDelegate;

@interface ACMSignInWidget : NSObject <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, ACMSignInWidgetProtocol> {
    UITableView *_table;
    UITableViewCell *_accountEditCell;
    UITableViewCell *_passwordEditCell;
    UITextField *_accountField;
    UITextField *_passwordField;
    UILabel *_accountLabel;
}

@property (nonatomic) id<ACMSignInWidgetDelegate> delegate;
@property (nonatomic) BOOL shouldAuthenticateOnUserInput;
@property (readonly, retain, nonatomic) UITableView *table;
@property (readonly, retain, nonatomic) UITableViewCell *accountEditCell;
@property (readonly, retain, nonatomic) UITableViewCell *passwordEditCell;
@property (readonly, retain, nonatomic) UILabel *accountLabel;
@property (readonly, retain, nonatomic) UILabel *passwordLabel;
@property (retain, nonatomic) UITextField *accountField;
@property (retain, nonatomic) UITextField *passwordField;
@property (nonatomic) struct CGPoint { double x0; double x1; } position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *view;
@property (retain, nonatomic) NSString *accountLabelText;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSDictionary *placeholderAttributes;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dealloc;
- (id)passwordField;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)setPasswordField:(id)a0;
- (id)accountField;
- (void)setAccountField:(id)a0;
- (void)disableControls:(BOOL)a0;
- (void)onSignIn:(id)a0;

@end
