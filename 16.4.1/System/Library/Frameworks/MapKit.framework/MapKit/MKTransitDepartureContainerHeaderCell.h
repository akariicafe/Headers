@class MKTransitDepartureContainerHeaderViewModel, UILayoutGuide, UIImageView, NSLayoutConstraint, _MKUILabel, MKTransitInfoLabelView;

@interface MKTransitDepartureContainerHeaderCell : MKCustomSeparatorCell {
    MKTransitInfoLabelView *_containerArtworkView;
    _MKUILabel *_containerTitleLabel;
    UIImageView *_incidentImageView;
    UILayoutGuide *_contentLayoutGuide;
    NSLayoutConstraint *_artworkToTitleLabelHorizontalSpacingConstraint;
}

@property (retain, nonatomic) MKTransitDepartureContainerHeaderViewModel *viewModel;

- (void)_commonInit;
- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_updateAppearance;

@end
