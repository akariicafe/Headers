@class UIImageView, UIView;

@interface CSDiscoveryItemPlatterSleepMigration : PLPlatterDiscoveryView {
    UIView *_sleepSymbolBackgroundView;
    UIView *_sleepSymbolImageView;
    UIImageView *_deviceImageView;
}

- (void)visualStylingProviderDidChange:(id)a0 forCategory:(long long)a1 outgoingProvider:(id)a2;
- (void)_configureGraphicViewIfNecessary;
- (void)_layoutGraphicView;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;

@end
