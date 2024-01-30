@class VTUIStyle, NSString, VTUIButton, SUICOrbView, UILabel, VTUIProximityContainerView, UIButton;

@interface VTUIProximityEnrollmentSuccessView : VTUIProximityView {
    NSString *_languageCode;
    SUICOrbView *_orbView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    VTUIProximityContainerView *_containerView;
    VTUIStyle *_vtStyle;
}

@property (readonly, nonatomic) VTUIButton *continueButton;
@property (retain, nonatomic) UIButton *dismissButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_setupContent;
- (void)_setupConstraintsToSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setupPhoneLandscapeConstraints;
- (void)_setupPortraitConstraints;

@end
