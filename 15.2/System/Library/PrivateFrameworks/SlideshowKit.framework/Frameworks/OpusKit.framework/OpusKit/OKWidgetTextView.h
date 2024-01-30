@class NSString, UITextView;

@interface OKWidgetTextView : OKWidgetTextViewProxy <UITextViewDelegate> {
    UITextView *_textView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (void)layoutSubviews;
- (id)initWithWidget:(id)a0;
- (void)textViewDidBeginEditing:(id)a0;
- (void)dealloc;
- (void)textViewDidEndEditing:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (id)settingFontName;
- (void)setSettingFontName:(id)a0;
- (float)settingFontSize;
- (void)setSettingFontSize:(float)a0;
- (id)settingTextColor;
- (void)setSettingTextColor:(id)a0;
- (id)settingTextBackgroundColor;
- (void)setSettingTextBackgroundColor:(id)a0;
- (long long)settingTextAlignment;
- (void)setSettingTextAlignment:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })settingContentEdgeInsets;
- (void)setSettingContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (BOOL)settingOverflowEnabled;
- (void)setSettingOverflowEnabled:(BOOL)a0;
- (BOOL)settingScrollEnabled;
- (void)setSettingScrollEnabled:(BOOL)a0;
- (id)settingText;
- (void)setSettingText:(id)a0;
- (id)settingAttributedText;
- (void)setSettingAttributedText:(id)a0;

@end
