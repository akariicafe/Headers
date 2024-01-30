@class UIButton, SKUIButtonViewElement, SKUIViewElement;

@interface SKUIButtonFooterSettingsHeaderFooterDescriptionView : SKUISettingsHeaderFooterDescriptionView {
    UIButton *_button;
    SKUIButtonViewElement *_buttonElement;
    SKUIViewElement *_viewElement;
}

+ (struct CGSize { double x0; double x1; })preferredSizeForSettingsHeaderFooterDescription:(id)a0 context:(id)a1;
+ (BOOL)prefetchResourcesForSettingsHeaderFooterDescription:(id)a0 reason:(long long)a1 context:(id)a2;
+ (void)requestLayoutForSettingsHeaderFooterDescription:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 settingsHeaderFooterDescription:(id)a1 context:(id)a2;
+ (id)_buttonWithButtonElement:(id)a0;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_buttonTapped:(id)a0;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (void)reloadWithSettingsHeaderFooterDescription:(id)a0 width:(double)a1 context:(id)a2;
- (void)_reloadWithButtonElement:(id)a0 context:(id)a1;

@end
