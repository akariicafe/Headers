@class SKUIViewReuseView, UIView;

@interface SKUIDefaultSettingDescriptionView : SKUISettingDescriptionView {
    BOOL _hasDisclosureChevron;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _padding;
    UIView *_viewElementView;
    SKUIViewReuseView *_viewReuseView;
}

+ (BOOL)prefetchResourcesForSettingDescription:(id)a0 reason:(long long)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })preferredSizeForSettingDescription:(id)a0 context:(id)a1;
+ (void)requestLayoutForSettingDescription:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 settingDescription:(id)a1 context:(id)a2;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_paddingForStyle:(id)a0;

- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (void)reloadWithSettingDescription:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)hasDisclosureChevron;

@end
