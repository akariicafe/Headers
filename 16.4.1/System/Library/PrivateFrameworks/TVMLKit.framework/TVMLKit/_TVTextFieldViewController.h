@class IKTextFieldElement, UITextField, NSString;

@interface _TVTextFieldViewController : UIViewController <IKAppKeyboardDelegate, _TVSearchBarDelegate>

@property (readonly, retain, nonatomic) IKTextFieldElement *viewElement;
@property (readonly, retain, nonatomic) UITextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)_updateViewLayout;
- (void)textDidChangeForKeyboard:(id)a0;
- (void)_updateUserText;
- (void)_updateKeyboardWithUserText;
- (void)searchBarDidChangeText:(id)a0;
- (void)updateWithViewElement:(id)a0;

@end
