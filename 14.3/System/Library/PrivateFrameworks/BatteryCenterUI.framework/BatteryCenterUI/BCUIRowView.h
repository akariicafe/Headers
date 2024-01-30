@class UIView, NSString, NSArray, UIImage, BCUIBatteryView, UIImageView, NSNumberFormatter, NSMutableDictionary, UILabel;
@protocol UIViewControllerTransitionCoordinator;

@interface BCUIRowView : UIView <MTVisualStylingRequiring, BCUIBatteryDeviceDisplaying> {
    UIImageView *_glyphImageView;
    UILabel *_nameLabel;
    UILabel *_percentChargeLabel;
    NSNumberFormatter *_percentChargeFormatter;
    BCUIBatteryView *_batteryView;
    UIView *_separator;
    NSMutableDictionary *_categoriesToVisualStylingProvider;
    NSString *_contentSizeCategory;
}

@property (nonatomic, getter=isSeparatorVisible) BOOL separatorVisible;
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
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateVisualStylingWithProvidersFromStylingProvider:(id)a0;
- (id)_effectiveContentSizeCategoryForTraitCollection:(id)a0;
- (id)_lazyPercentChargeFormatter;
- (id)_percentChargeString:(long long)a0;
- (id)_visualStylingProviderForCategory:(long long)a0;
- (void)_stopAutomaticallyUpdatingVisualStylingForCategory:(long long)a0;
- (void)_beginAutomaticallyUpdatingVisualStylingForCategory:(long long)a0;
- (void)_configureSeparatorIfNecessary;
- (void)_configureBatteryViewIfNecessary;
- (void)_configureGlyphImageViewIfNecessary;
- (void)_configurePercentChargeLabelIfNecessary;
- (void)_configureNameLabelIfNecessary;

@end
