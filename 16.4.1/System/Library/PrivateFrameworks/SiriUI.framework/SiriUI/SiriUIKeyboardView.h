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
+ (double)heightForWidthSizeClass:(BOOL)a0;
+ (double)_keyboardAccessoryViewHeight;
+ (double)_paddingBetweenKeyboardAndInputAccessoryViewWhenMinimized:(BOOL)a0;
+ (double)_textFieldHeight;
+ (id)inputAccessoryViewBackgroundColor;

- (void)_keyboardWillShow:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)safeAreaInsetsDidChange;
- (void)setText:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)layoutSubviews;
- (BOOL)textFieldShouldClear:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)resignFirstResponder;
- (id)init;
- (void)_keyboardWillHide:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputViewStyle:(long long)a1;
- (void)setAudioRoutePickerBluetoothOn:(BOOL)a0;
- (void)_audioRouteButtonTapped:(id)a0;
- (void)_helpButtonTapped:(id)a0;
- (void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(id /* block */)a0;
- (void)_reportBugButtonLongPressed;
- (void)_reportBugButtonTapped;
- (BOOL)_showsReportBugButton;
- (void)setShowAudioRoutePicker:(BOOL)a0;
- (double)_visibleHeightFromNotification:(id)a0;
- (void)_configureAudioRoutePickerForAccessibility;
- (void)_configureReportBugButton;
- (void)_configureReportButtonForAccessibility;
- (id)_createHelpButton:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_createReportBugButtonWithTemplateImage:(id)a0;
- (id)_createTextFieldWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_defaultFrame;
- (void)_helpButtonLongPressed:(id)a0;
- (void)_undoTextFieldEdit:(id)a0;

@end
