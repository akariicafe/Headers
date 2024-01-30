@class NSString, UITextView;

@interface OKWidgetTextView : OKWidgetTextViewProxy <UITextViewDelegate> {
    UITextView *_textView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (id)initWithWidget:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)setSettingText:(id)a0;
- (id)settingFontName;
- (float)settingFontSize;
- (void)setSettingAttributedText:(id)a0;
- (void)setSettingContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setSettingFontName:(id)a0;
- (void)setSettingFontSize:(float)a0;
- (void)setSettingOverflowEnabled:(BOOL)a0;
- (void)setSettingScrollEnabled:(BOOL)a0;
- (void)setSettingTextAlignment:(long long)a0;
- (void)setSettingTextBackgroundColor:(id)a0;
- (void)setSettingTextColor:(id)a0;
- (id)settingAttributedText;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })settingContentEdgeInsets;
- (BOOL)settingOverflowEnabled;
- (BOOL)settingScrollEnabled;
- (id)settingText;
- (long long)settingTextAlignment;
- (id)settingTextBackgroundColor;
- (id)settingTextColor;

@end
