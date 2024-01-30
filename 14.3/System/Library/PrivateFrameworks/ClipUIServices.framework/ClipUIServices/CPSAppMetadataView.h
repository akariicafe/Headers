@class CPSVibrantLabel, CPSAppStoreButton, UIImageView, UIImage, CPSContentRatingContainerView, NSArray;

@interface CPSAppMetadataView : UIButton {
    UIImageView *_appIconView;
    CPSVibrantLabel *_poweredByVibrantLabel;
    CPSVibrantLabel *_appNameVibrantLabel;
    CPSContentRatingContainerView *_contentRatingContainerView;
    CPSAppStoreButton *_appStoreButton;
    NSArray *_leadingAppStoreButtonConstraints;
    NSArray *_trailingAppStoreButtonConstraints;
}

@property (retain, nonatomic) UIImage *appIcon;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)_setUpSubviews;
- (void)updateWithMetadata:(id)a0;
- (void)_updateAppStoreButtonConstraints;

@end
