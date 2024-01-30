@class UIView, CPTravelEstimates, NSArray, UIImageView, UILayoutGuide, CPSAspectFitImageView, CPSPrimaryManeuverLayoutConfiguration, CPSAbridgableLabel, CPManeuver;

@interface CPSPrimaryManeuverView : UIView

@property (nonatomic) BOOL calculationViewIsSizing;
@property (nonatomic) double generatedWidth;
@property (retain, nonatomic) UIView *junctionImageBackgroundView;
@property (retain, nonatomic) CPSAbridgableLabel *titleLabel;
@property (retain, nonatomic) CPSAbridgableLabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *symbolImageView;
@property (retain, nonatomic) CPSAspectFitImageView *junctionImageView;
@property (retain, nonatomic) NSArray *activeLayoutConstraints;
@property (retain, nonatomic) UILayoutGuide *labelCenteringLayoutGuide;
@property (retain, nonatomic) UILayoutGuide *yCenteringGuide;
@property (retain, nonatomic) UILayoutGuide *centeringLayoutGuide;
@property (retain, nonatomic) CPSPrimaryManeuverLayoutConfiguration *activeLayoutConfiguration;
@property (retain, nonatomic) CPSPrimaryManeuverLayoutConfiguration *layoutConfigurationForIntrinsicSizing;
@property (readonly, nonatomic) CPManeuver *maneuver;
@property (retain, nonatomic) CPTravelEstimates *currentTravelEstimates;
@property (retain, nonatomic) NSArray *layoutConfigurations;
@property (nonatomic) BOOL usesCustomBackgroundColor;

+ (id)instructionsForManeuver:(id)a0;
+ (id)symbolImageForManeuver:(id)a0;
+ (id)junctionImageForManeuver:(id)a0;

- (id)_titleFont;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_init;
- (id)_subtitleFont;
- (id)_minimalLayoutConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)centersManeuverInView;
- (double)symbolImageHeight;
- (BOOL)hasJunctionImageBackground;
- (id)junctionBackgroundColor;
- (BOOL)fitJunctionViewToHeight;
- (id)initWithManeuver:(id)a0;
- (id)shortestJunctionViewlayoutConfigurationForSize:(struct CGSize { double x0; double x1; })a0;
- (id)layoutConfigurationForSize:(struct CGSize { double x0; double x1; })a0;
- (id)shortestInstructionlayoutConfigurationForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateJunctionBackgroundColor;
- (void)_updateSubtitleTextColor;
- (void)_generateLayoutConfigurationsForSizeIfNecessary:(struct CGSize { double x0; double x1; })a0 force:(BOOL)a1;
- (id)_formattedDistance;
- (void)_switchToLayoutConfiguration:(id)a0;
- (void)_activateFullLayoutWideImageConstraints;
- (void)_activateFullLayoutConstraints;
- (void)_activateJunctionViewNoInstructionWideImageConstraints;
- (void)_activateJunctionViewNoInstructionConstraints;
- (void)_activateFullNoJunctionViewWideImageLayoutConstraints;
- (void)_activateFullNoJunctionViewLayoutConstraints;
- (void)_activateFullSubtitleNextToImageConstraints;
- (void)_activateMinimalWideImageLayoutConstraints;
- (void)_activateMinimalLayoutConstraints;
- (long long)_compareInstruction:(id)a0 toInstruction:(id)a1;
- (id)_fullLayoutConstraints;
- (id)_fullLayoutWideImageConstraints;
- (id)_junctionViewNoSubtitleConstraints;
- (id)_junctionViewNoInstructionWideImageConstraints;
- (id)_fullLayoutNoJunctionViewConstraints;
- (id)_fullLayoutNoJunctionViewWideImageConstraints;
- (id)_minimalLayoutWideImageConstraints;
- (id)_fullSubtitleNextToImageConstraints;

@end
