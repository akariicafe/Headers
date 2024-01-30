@class SKUISettingsHeaderFooterDescriptionView;

@interface SKUISettingsTableHeaderFooterView : UITableViewHeaderFooterView {
    SKUISettingsHeaderFooterDescriptionView *_settingsHeaderFooterDescriptionView;
}

- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)displaySettingsHeaderFooterDescriptionView:(id)a0;

@end
