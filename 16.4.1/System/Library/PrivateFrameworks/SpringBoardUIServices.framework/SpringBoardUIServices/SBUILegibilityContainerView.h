@class UIImage, UIView;
@protocol SBUILegibilitySettings, SBUILegibilityEngine, _SBUILegibilityContainerContentView;

@interface SBUILegibilityContainerView : UIView {
    UIView<_SBUILegibilityContainerContentView> *_drawView;
    BOOL _dirty;
}

@property (nonatomic) double strength;
@property (readonly, nonatomic) UIImage *strengthenedImage;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIImage *processedImage;
@property (weak, nonatomic) id<SBUILegibilityEngine> legibilityEngine;
@property (retain, nonatomic) id<SBUILegibilitySettings> legibilitySettings;
@property (readonly, nonatomic) long long options;

- (void)sizeToFit;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)_setDrawImage:(id)a0;
- (BOOL)_usesSecondaryColor;
- (void)setImage:(id)a0 strengthenedImage:(id)a1 strength:(double)a2;
- (id)_drawView;
- (BOOL)updateOptions:(long long)a0;
- (void)_applyStrength;
- (void)layoutSubviews;
- (void)applySettingsForLegibilityStyle:(long long)a0;
- (BOOL)_updateFilters;
- (BOOL)_usesColorFilters;
- (id)_contentColor;
- (id)buildDrawView;
- (void).cxx_destruct;

@end
