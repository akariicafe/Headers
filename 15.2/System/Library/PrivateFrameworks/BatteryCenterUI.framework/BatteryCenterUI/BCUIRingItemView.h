@class MTVisualStylingProvider, NSArray, NSString, UIImage, BCUIChargeRing, UILabel, NSNumberFormatter;
@protocol UIViewControllerTransitionCoordinator;

@interface BCUIRingItemView : UIView <MTVisualStylingRequiring, BCUIBatteryDeviceDisplaying> {
    BCUIChargeRing *_chargeRing;
    UILabel *_chargeLabel;
    NSNumberFormatter *_percentChargeFormatter;
    MTVisualStylingProvider *_visualStylingProvider;
    NSString *_contentSizeCategory;
}

@property (nonatomic) long long ringItemViewStyle;
@property (nonatomic) double ringLineWidth;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long percentCharge;
@property (nonatomic, getter=isCharging) BOOL charging;
@property (nonatomic, getter=isLowCharge) BOOL lowCharge;
@property (nonatomic, getter=isLowPowerModeEnabled) BOOL lowPowerModeEnabled;
@property (retain, nonatomic) UIImage *glyph;
@property (nonatomic) double scaleFactor;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isEmpty) BOOL empty;
@property (weak, nonatomic) id<UIViewControllerTransitionCoordinator> transitionCoordinator;

- (void)layoutSubviews;
- (void)_beginAutomaticallyUpdatingChargeLabelVisualStyling;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForChargeLabelWithSize:(struct CGSize { double x0; double x1; })a0 baseLineOffsetFromBoundsTop:(double)a1 chargeRingSize:(struct CGSize { double x0; double x1; })a2 style:(long long)a3 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 scale:(double)a5;
- (void)_stopAutomaticallyUpdatingVisualStyling;
- (id)_percentChargeString:(long long)a0;
- (void)didMoveToSuperview;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)_updateVisualStylingWithProvidersFromStylingProvider:(id)a0;
- (struct CGSize { double x0; double x1; })_sizeForChargeLabel:(id)a0 withStyle:(long long)a1 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 scale:(double)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForChargeRingWithSize:(struct CGSize { double x0; double x1; })a0 chargeLabelSize:(struct CGSize { double x0; double x1; })a1 style:(long long)a2 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 scale:(double)a4;
- (id)_lazyPercentChargeFormatter;
- (id)_visualStylingProviderForCategory:(long long)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)_effectiveContentSizeCategoryForTraitCollection:(id)a0;
- (id)_chargeRing;
- (BOOL)_isPercentSymbolEnabledForRingItemStyle:(long long)a0 andContentSizeCategory:(id)a1;
- (void)_configureChargeLabelForStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })_sizeForChargeRingWithStyle:(long long)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2;
- (void)didMoveToWindow;
- (void)_updateFontForChargeLabelForStyle:(long long)a0;

@end
