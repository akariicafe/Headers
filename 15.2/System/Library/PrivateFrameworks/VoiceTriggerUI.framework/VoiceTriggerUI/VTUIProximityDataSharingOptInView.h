@class VTUIButton, VTUIProximityContainerView, UILabel, UIButton;

@interface VTUIProximityDataSharingOptInView : VTUIProximityView {
    VTUIProximityContainerView *_containerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (retain, nonatomic) VTUIButton *shareButton;
@property (retain, nonatomic) VTUIButton *notNowButton;
@property (retain, nonatomic) UIButton *dismissButton;
@property (retain, nonatomic) UIButton *aboutLink;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setupContent;
- (void)_setupPortraitConstraints;

@end
