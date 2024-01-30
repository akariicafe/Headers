@interface WorkflowUI.NameIconComposeViewController : UIViewController <WFGlyphPickerDelegate, UITextFieldDelegate, UIAdaptivePresentationControllerDelegate> {
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ glyphCharacter;
    void /* unknown type, empty encoding */ viewDidAppear;
    void /* unknown type, empty encoding */ textFieldMinHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollViewBottomConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_glyphPickerHeightConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentViewScrollViewEqualHeightConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentViewViewEqualHeightConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_iconTextFieldOuterContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_iconTextFieldInnerContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_iconView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textField;
    void /* unknown type, empty encoding */ $__lazy_storage_$_glyphPicker;
    void /* unknown type, empty encoding */ isIPad;
}

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)glyphPicker:(id)a0 didSelectGlyphWithCharacter:(unsigned short)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)presentationControllerDidAttemptToDismiss:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)done;
- (void)cancel;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)keyboardWillChange:(id)a0;
- (void)updateIsModalInPresentation;

@end
