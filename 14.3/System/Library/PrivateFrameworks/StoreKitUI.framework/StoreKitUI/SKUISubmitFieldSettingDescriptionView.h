@class SKUIInputViewElement, UILabel, SKUIFieldSettingDescription;

@interface SKUISubmitFieldSettingDescriptionView : SKUIFieldSettingDescriptionView {
    double _aggregateLabelWidth;
    SKUIInputViewElement *_inputViewElement;
    UILabel *_label;
    SKUIFieldSettingDescription *_settingDescription;
}

+ (BOOL)prefetchResourcesForSettingDescription:(id)a0 reason:(long long)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })preferredSizeForSettingDescription:(id)a0 context:(id)a1;
+ (void)requestLayoutForSettingDescription:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 settingDescription:(id)a1 context:(id)a2;

- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (void)reloadWithSettingDescription:(id)a0 width:(double)a1 context:(id)a2;
- (void)_addInputWithElement:(id)a0;
- (id)_currentControllerValue;
- (void)_addSubmitInputWithElement:(id)a0;

@end
