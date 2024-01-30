@class UIImageView, UIActivityIndicatorView, UILabel, SKUIViewElementLayoutContext, SKUISettingsFamilyViewElement;

@interface SKUIFamilySettingDescriptionView : SKUISettingDescriptionView {
    UIActivityIndicatorView *_activityIndicator;
    UIImageView *_iconImageView;
    UILabel *_labelView;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUISettingsFamilyViewElement *_viewElement;
    long long _viewState;
}

+ (BOOL)prefetchResourcesForSettingDescription:(id)a0 reason:(long long)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })preferredSizeForSettingDescription:(id)a0 context:(id)a1;
+ (void)requestLayoutForSettingDescription:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 settingDescription:(id)a1 context:(id)a2;

- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)layoutSubviews;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (void)_setViewState:(long long)a0;
- (void)_layoutWithActivityIndicator;
- (void)_layoutWithLockup;
- (id)_attributedStringForKey:(id)a0;
- (id)_attributedStringForViewState;
- (void)reloadWithSettingDescription:(id)a0 width:(double)a1 context:(id)a2;

@end
