@class SKUISuggestedHandlesSettingsHeaderFooterDescription, NSMutableArray, UILabel;

@interface SKUISuggestedHandlesSettingsHeaderFooterDescriptionView : SKUISettingsHeaderFooterDescriptionView {
    NSMutableArray *_buttons;
    SKUISuggestedHandlesSettingsHeaderFooterDescription *_description;
    UILabel *_label;
}

+ (struct CGSize { double x0; double x1; })preferredSizeForSettingsHeaderFooterDescription:(id)a0 context:(id)a1;
+ (BOOL)prefetchResourcesForSettingsHeaderFooterDescription:(id)a0 reason:(long long)a1 context:(id)a2;
+ (void)requestLayoutForSettingsHeaderFooterDescription:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 settingsHeaderFooterDescription:(id)a1 context:(id)a2;
+ (id)_helpLabelWithDescription:(id)a0 forWidth:(double)a1;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (void)_buttonAction:(id)a0;
- (void)reloadWithSettingsHeaderFooterDescription:(id)a0 width:(double)a1 context:(id)a2;

@end
