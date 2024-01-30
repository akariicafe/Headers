@class VTUIStyle, NSString, VTUIButton, UIImageView, UILabel, VTUIProximityContainerView, UIButton;

@interface VTUIProximityEnrollmentSuccessView : VTUIProximityView {
    NSString *_languageCode;
    UIImageView *_orbImage;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    VTUIProximityContainerView *_containerView;
    VTUIStyle *_vtStyle;
}

@property (readonly, nonatomic) VTUIButton *continueButton;
@property (retain, nonatomic) UIButton *dismissButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setupContent;
- (void)_setupPhoneLandscapeConstraints;
- (void)_setupConstraintsToSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setupPortraitConstraints;

@end
