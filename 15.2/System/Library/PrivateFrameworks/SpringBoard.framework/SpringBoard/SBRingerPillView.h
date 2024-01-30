@class SBRingerVolumeSliderView, UIColor, BSUICAPackageView, NSArray, UILabel, MTVisualStylingProvider, MTMaterialShadowView;

@interface SBRingerPillView : UIView

@property (retain, nonatomic) MTMaterialShadowView *materialView;
@property (retain, nonatomic) MTVisualStylingProvider *stylingProvider;
@property (retain, nonatomic) BSUICAPackageView *glyphView;
@property (retain, nonatomic) UILabel *silentModeLabel;
@property (retain, nonatomic) UILabel *ringerLabel;
@property (retain, nonatomic) UILabel *onLabel;
@property (retain, nonatomic) UILabel *offLabel;
@property (retain, nonatomic) SBRingerVolumeSliderView *slider;
@property (retain, nonatomic) UIColor *glyphTintColor;
@property (copy, nonatomic) NSArray *glyphTintBackgroundLayers;
@property (copy, nonatomic) NSArray *glyphTintShapeLayers;
@property (nonatomic) unsigned long long state;
@property (nonatomic) float sliderValue;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)_setGlyphTintColor:(id)a0 animationDuration:(double)a1;
- (id)_visibleViewsForState:(unsigned long long)a0;
- (void)_updateGlyphWithStaticColor:(id)a0 animationSettings:(id)a1;

@end
