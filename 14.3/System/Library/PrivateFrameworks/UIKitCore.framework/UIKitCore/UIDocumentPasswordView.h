@class NSString, UIDocumentPasswordField, NSObject, UILabel;
@protocol UIDocumentPasswordViewDelegate;

@interface UIDocumentPasswordView : UIView <UITextFieldDelegate> {
    UILabel *_label;
}

@property (nonatomic) NSObject<UIDocumentPasswordViewDelegate> *passwordDelegate;
@property (readonly, nonatomic) UIDocumentPasswordField *passwordField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)textFieldDidBeginEditing:(id)a0;
- (id)_labelFont;
- (void)dealloc;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)_canDrawContent;
- (id)_labelTextColor;
- (void)_passwordEntered:(id)a0;
- (double)_textFieldWidth;
- (double)_labelHorizontalOffset;
- (id)initWithDocumentName:(id)a0;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
