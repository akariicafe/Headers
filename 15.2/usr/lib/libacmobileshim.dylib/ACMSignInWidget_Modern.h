@class UIColor, NSString, UITextField, NSDictionary, UIView, UIButton;
@protocol ACMSignInWidgetDelegate;

@interface ACMSignInWidget_Modern : NSObject <UITextFieldDelegate, ACMSignInWidgetProtocol>

@property (retain, nonatomic) UIButton *accountClearButton;
@property (retain, nonatomic) UIButton *passwordClearButton;
@property (nonatomic) BOOL hideTopSeparator;
@property (nonatomic) BOOL hideMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<ACMSignInWidgetDelegate> delegate;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) UITextField *accountField;
@property (readonly, nonatomic) UITextField *passwordField;
@property (retain, nonatomic) NSString *accountLabelText;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSDictionary *placeholderAttributes;
@property (nonatomic) BOOL shouldAuthenticateOnUserInput;
@property (nonatomic) struct CGPoint { double x; double y; } position;

- (BOOL)textFieldShouldClear:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dealloc;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (double)leftMargin;
- (id)textFieldFont;
- (void)applyPlaceholderAttributes;
- (id)clearButtonImage;
- (void)clearTextField:(id)a0;
- (void)touchIn:(id)a0;
- (void)touchOut:(id)a0;
- (id)createClearButtonForEditField:(id)a0;
- (void)disableControls:(BOOL)a0;

@end
