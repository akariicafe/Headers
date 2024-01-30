@class BCUIRingCapShadow, NSString, NSArray, UIImage, CABackdropLayer, UIImageView, BCUIRingView, MTVisualStylingProvider;
@protocol UIViewControllerTransitionCoordinator;

@interface BCUIChargeRing : UIView <MTVisualStylingRequiring, BCUIBatteryDeviceDisplaying> {
    BCUIRingView *_baseRing;
    BCUIRingView *_chargeRing;
    BCUIRingCapShadow *_ringCapShadow;
    UIImageView *_boltMaskImageView;
    UIImageView *_boltImageView;
    CABackdropLayer *_captureBackdrop;
    UIImageView *_glyphImageView;
    MTVisualStylingProvider *_visualStylingProvider;
    MTVisualStylingProvider *_baseRingVisualStylingProvider;
}

@property (nonatomic) double lineWidth;
@property (nonatomic) double ringScale;
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

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_stopAutomaticallyUpdatingVisualStylingForCategory:(long long)a0;
- (void)_updateVisualStylingWithProvidersFromStylingProvider:(id)a0;
- (id)_chargeRing;
- (void)_configureBoltMaskImageViewIfNecessary;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_baseRing;
- (void)_configureRingCapShadowIfNecessary;
- (id)_glyphImageView;
- (id)_ringVisualStylingProvider;
- (BOOL)_shouldShowRingCapShadow;
- (void)_configureBoltImageViewIfNecessary;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (id)_visualStylingProviderForCategory:(long long)a0;
- (void)_updateVisualStylingForBaseRingIfNecessary;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_isPastThresholdForRingCapShadow;
- (void)_updateVisualStylingForBolt;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)_beginAutomaticallyUpdatingPrimaryVisualStylingForView:(id)a0 observerBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_configureCaptureBackdropIfNecessary;
- (void)_beginAutomaticallyUpdatingVisualStylingForCategory:(long long)a0;

@end
