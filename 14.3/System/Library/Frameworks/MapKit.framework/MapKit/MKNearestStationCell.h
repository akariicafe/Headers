@class UIImageView, NSLayoutConstraint, _MKUILabel, MKTransitInfoLabelView;

@interface MKNearestStationCell : UITableViewCell {
    _MKUILabel *_stationTitleLabel;
    MKTransitInfoLabelView *_stationInfoLabel;
    UIImageView *_stationImageView;
    NSLayoutConstraint *_stationLabelToImageViewConstraint;
    NSLayoutConstraint *_stationLabelToLeadingEdgeConstraint;
    NSLayoutConstraint *_stationLabelToTopConstraint;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_contentSizeCategoryDidChange;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)_updateConstraintValues;
- (void)configureWithNearestStation:(id)a0;

@end
