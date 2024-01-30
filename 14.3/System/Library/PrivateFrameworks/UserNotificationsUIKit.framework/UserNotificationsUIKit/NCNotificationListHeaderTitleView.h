@class NSString, SBUILegibilityLabel, BSUIFontProvider, _UILegibilitySettings;

@interface NCNotificationListHeaderTitleView : UIView <NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting>

@property (retain, nonatomic) SBUILegibilityLabel *titleLabel;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic, getter=_fontProvider, setter=_setFontProvider:) BSUIFontProvider *fontProvider;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isPrimary) BOOL primary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (void)_configureTitleLabelIfNecessary;
- (id)_labelFont;
- (void)_invalidateTitleLabel;
- (void)layoutSubviews;
- (void)_layoutTitleLabel;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)adjustForLegibilitySettingsChange:(id)a0;

@end
