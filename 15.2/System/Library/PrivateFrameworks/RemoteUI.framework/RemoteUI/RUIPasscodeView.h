@class PSPasscodeField, NSString, RUIHeaderElement, RUIElement, UIScrollView, RUIHTMLHeaderElement, RUIPage, UIView, RUIHTMLHeaderView, UITextField, RUIObjectModel, UIColor;
@protocol RemoteUITableFooter, RUIHeader;

@interface RUIPasscodeView : RUIElement <RUITableFooterDelegate, CAAnimationDelegate, PSPasscodeFieldDelegate, RUITopLevelPageElement> {
    UIScrollView *_containerView;
    UIView<RUIHeader> *_headerView;
    RUIHTMLHeaderView *_HTMLHeaderView;
    UITextField *_complexPasscodeField;
    UIView<RemoteUITableFooter> *_footerView;
    NSString *_pendingAutoFillToken;
    BOOL _appeared;
    unsigned long long _passcodeValidationAttempts;
}

@property (weak, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) RUIPage *page;
@property (copy, nonatomic) NSString *headerTitle;
@property (readonly, nonatomic) PSPasscodeField *passcodeField;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (copy, nonatomic) NSString *submittedPIN;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) unsigned long long numberOfEntryFields;
@property (retain, nonatomic) RUIHeaderElement *header;
@property (retain, nonatomic) RUIHTMLHeaderElement *HTMLHeader;
@property (retain, nonatomic) RUIElement *footer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)_doneButtonTapped:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)sourceURL;
- (id)view;
- (void)passcodeField:(id)a0 enteredPasscode:(id)a1;
- (id)footerView;
- (void).cxx_destruct;
- (id)headerView;
- (void)setImageSize:(struct CGSize { double x0; double x1; })a0;
- (id)titleLabel;
- (void)viewDidAppear:(BOOL)a0;
- (void)setImage:(id)a0;
- (void)setImageAlignment:(int)a0;
- (void)populatePostbackDictionary:(id)a0;
- (id)passcodeView;
- (id)subElementWithID:(id)a0;
- (id)initWithAttributes:(id)a0 parent:(id)a1;
- (void)viewDidLayout;
- (void)performAction:(int)a0 forElement:(id)a1 completion:(id /* block */)a2;
- (id)HTMLHeaderView;
- (void)footerView:(id)a0 activatedLinkWithURL:(id)a1;
- (void)autofillWithToken:(id)a0;
- (BOOL)_requiresLocalPasscodeValidation;
- (void)_updateFieldSpacer;
- (void)_complexPasscodeFieldDidChange:(id)a0;
- (void)submitPIN;
- (void)_jiggleView:(id)a0;
- (void)_clearPasscode;

@end
