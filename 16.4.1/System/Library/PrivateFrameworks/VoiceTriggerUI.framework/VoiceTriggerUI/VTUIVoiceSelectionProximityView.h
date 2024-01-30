@class UIView, NSString, NSArray, UIImageView, VTUIProximityContainerView, UIButton, UILabel, VTUIStyle;

@interface VTUIVoiceSelectionProximityView : VTUIProximityView <VTUIVoiceSelectionContaining> {
    UIImageView *_orbImage;
    VTUIProximityContainerView *_containerView;
    UILabel *_titleLabel;
    UIView *_footerView;
    UIView *_contentView;
    VTUIStyle *_vtStyle;
    BOOL _allowsRandomVoiceSelection;
    long long _selectionStyle;
    BOOL _isHidingCompactBackgroundCardView;
}

@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) UIButton *continueButton;
@property (retain, nonatomic) UIButton *chooseRandomVoiceButton;
@property (retain, nonatomic) UIButton *dismissButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)setContentView:(id)a0;
- (id)viewConstraints;
- (void)_setupConstraintsToSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setupContentWithTitle:(id)a0;
- (id)initWithTitle:(id)a0 allowsRandomVoiceSelection:(BOOL)a1 forSelectionStyle:(long long)a2;
- (void)setShouldHideCompactBackgroundCardView:(BOOL)a0;

@end
