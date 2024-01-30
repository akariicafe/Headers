@class SiriUIHelpButton, NSString, UITextField, SiriUIAudioRoutePickerButton, SiriUIContentButton, NSArray;
@protocol SiriUIKeyboardViewDelegate;

@interface SiriUIKeyboardView : UIInputView <UITextFieldDelegate> {
    SiriUIHelpButton *_helpButton;
    SiriUIAudioRoutePickerButton *_audioRoutePickerButton;
    SiriUIContentButton *_reportBugButton;
    double _interKeyboardAccessoryViewPadding;
    double _verticalCompensation;
    NSArray *_originalInstalledLanguageIdentifiers;
}

@property (retain, nonatomic) UITextField *textField;
@property (weak, nonatomic) id<SiriUIKeyboardViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_textFieldFont;
+ (double)_textFieldHeight;
+ (double)_keyboardAccessoryViewHeight;
+ (id)inputAccessoryViewBackgroundColor;
+ (double)_paddingBetweenKeyboardAndInputAccessoryViewWhenMinimized:(BOOL)a0;
+ (double)heightForWidthSizeClass:(BOOL)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)_keyboardWillHide:(id)a0;
- (void)safeAreaInsetsDidChange;
- (id)initWithDelegate:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)_keyboardWillShow:(id)a0;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputViewStyle:(long long)a1;
- (id)init;
- (BOOL)resignFirstResponder;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_defaultFrame;
- (id)_createHelpButton:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_createTextFieldWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configureReportBugButton;
- (void)_helpButtonTapped:(id)a0;
- (void)_helpButtonLongPressed:(id)a0;
- (void)_audioRouteButtonTapped:(id)a0;
- (void)_configureAudioRoutePickerForAccessibility;
- (BOOL)_showsReportBugButton;
- (void)_createReportBugButtonWithTemplateImage:(id)a0;
- (void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(id /* block */)a0;
- (void)_reportBugButtonTapped;
- (void)_reportBugButtonLongPressed;
- (void)_configureReportButtonForAccessibility;
- (void)_undoTextFieldEdit:(id)a0;
- (double)_visibleHeightFromNotification:(id)a0;
- (void)setShowAudioRoutePicker:(BOOL)a0;
- (void)setAudioRoutePickerBluetoothOn:(BOOL)a0;

@end
