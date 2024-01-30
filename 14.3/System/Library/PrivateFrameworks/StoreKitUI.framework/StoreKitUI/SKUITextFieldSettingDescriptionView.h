@class NSString, SKUIInputViewElement, UITextField, UILabel, SKUIFieldSettingDescription;

@interface SKUITextFieldSettingDescriptionView : SKUIFieldSettingDescriptionView <UITextFieldDelegate> {
    double _aggregateLabelWidth;
    SKUIInputViewElement *_inputViewElement;
    UILabel *_label;
    SKUIFieldSettingDescription *_settingDescription;
    UITextField *_textField;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)prefetchResourcesForSettingDescription:(id)a0 reason:(long long)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })preferredSizeForSettingDescription:(id)a0 context:(id)a1;
+ (void)requestLayoutForSettingDescription:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 settingDescription:(id)a1 context:(id)a2;

- (void)tintColorDidChange;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (void)reloadWithSettingDescription:(id)a0 width:(double)a1 context:(id)a2;
- (void)_addInputWithElement:(id)a0;
- (id)_currentControllerValue;
- (void)_addLabelWithElement:(id)a0;
- (void)_updateTextFieldValue:(id)a0;
- (void)_fillLayoutWithView:(id)a0 labelForBaselinePosition:(id)a1;
- (void)_arrangeTextField:(id)a0 andLabel:(id)a1;
- (void)_addTextInputWithElement:(id)a0;
- (void)_alignView:(id)a0 withBaselineLabel:(id)a1 font:(id)a2 offsetX:(double)a3 fitWidth:(double)a4;
- (void)beginEdits;
- (void)commitEdits;

@end
