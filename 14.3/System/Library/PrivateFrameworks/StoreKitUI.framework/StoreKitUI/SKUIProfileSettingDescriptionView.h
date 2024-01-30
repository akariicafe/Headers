@class UILabel, SKUIImageView;

@interface SKUIProfileSettingDescriptionView : SKUISettingDescriptionView {
    UILabel *_handleLabel;
    BOOL _hasDisclosureChevron;
    SKUIImageView *_imageView;
    UILabel *_nameLabel;
}

+ (BOOL)prefetchResourcesForSettingDescription:(id)a0 reason:(long long)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })preferredSizeForSettingDescription:(id)a0 context:(id)a1;
+ (void)requestLayoutForSettingDescription:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 settingDescription:(id)a1 context:(id)a2;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (void)reloadWithSettingDescription:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)hasDisclosureChevron;

@end
