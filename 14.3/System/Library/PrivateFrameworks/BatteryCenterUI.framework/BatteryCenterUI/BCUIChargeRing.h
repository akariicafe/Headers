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
@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isEmpty) BOOL empty;
@property (weak, nonatomic) id<UIViewControllerTransitionCoordinator> transitionCoordinator;

- (void).cxx_destruct;
- (id)_glyphImageView;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_chargeRing;
- (void)_updateVisualStylingWithProvidersFromStylingProvider:(id)a0;
- (id)_visualStylingProviderForCategory:(long long)a0;
- (id)_baseRing;
- (void)_updateVisualStylingForBaseRingIfNecessary;
- (void)_configureRingCapShadowIfNecessary;
- (BOOL)_shouldShowRingCapShadow;
- (void)_configureBoltMaskImageViewIfNecessary;
- (void)_configureBoltImageViewIfNecessary;
- (void)_updateVisualStylingForBolt;
- (void)_configureCaptureBackdropIfNecessary;
- (void)_stopAutomaticallyUpdatingVisualStylingForCategory:(long long)a0;
- (void)_beginAutomaticallyUpdatingVisualStylingForCategory:(long long)a0;
- (BOOL)_isPastThresholdForRingCapShadow;
- (void)_beginAutomaticallyUpdatingPrimaryVisualStylingForView:(id)a0 observerBlock:(id /* block */)a1;
- (id)_ringVisualStylingProvider;

@end
