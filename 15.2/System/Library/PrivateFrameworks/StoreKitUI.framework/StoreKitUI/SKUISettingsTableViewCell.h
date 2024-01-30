@class SKUISettingDescriptionView, UIImageView;

@interface SKUISettingsTableViewCell : UITableViewCell {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    UIImageView *_disclosureChevron;
    BOOL _hasDisclosureChevron;
    SKUISettingDescriptionView *_settingDescriptionView;
}

@property (readonly, nonatomic) SKUISettingDescriptionView *settingDescriptionView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setBackgroundColor:(id)a0;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (void)displaySettingDescriptionView:(id)a0;

@end
