@class UIStackView, NSString, UIImageView, MULoadingOverlayController, UILabel, MKMapItem;

@interface MUNearestStationRowView : MUPlaceSectionRowView {
    UILabel *_titleLabel;
    UILabel *_secondaryLabel;
    UILabel *_tertiaryLabel;
    UIImageView *_stopImageView;
    UIStackView *_labelStackView;
    MKMapItem *_nearestStation;
    MULoadingOverlayController *_loadingOverlayController;
}

@property (retain, nonatomic) NSString *distanceString;

- (void)_updateFonts;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)configureWithNearestStation:(id)a0;

@end
