@class NSString, NCNotificationManagementBlueButton, UIImageView, UILabel, UIView, NSMutableDictionary;

@interface NCNotificationManagementView : UIView <MTVisualStylingProviding> {
    UIImageView *_icon;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_topSeparator;
    UILabel *_explanation;
    UIView *_bottomSeparator;
    NSMutableDictionary *_categoriesToProviders;
    BOOL _isCriticalAlert;
}

@property (readonly, nonatomic) NCNotificationManagementBlueButton *deliveryButton;
@property (readonly, nonatomic) NCNotificationManagementBlueButton *onOffToggleButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)_separatorHeight;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)visualStylingProviderForCategory:(long long)a0;
- (id)initWithIcon:(id)a0 title:(id)a1 subtitle:(id)a2 sectionSettings:(id)a3 criticalAlert:(BOOL)a4;
- (void)_configureIconIfNeccessary:(id)a0;
- (void)_configureTitleIfNeccessary:(id)a0;
- (void)_configureSubtitleIfNeccessary:(id)a0;
- (void)_configureDeliveryButtonIfNeccessary:(id)a0;
- (void)_configureExplanationIfNeccessary:(id)a0;
- (void)_configureOnOffToggleButtonIfNeccessary:(id)a0;
- (id)_newSeparatorView;
- (void)_updateTopSeparatorVisualStyling;
- (void)_updateExplanationVisualStyling;
- (void)_configureTopSeparatorIfNeccessary;
- (struct CGSize { double x0; double x1; })_titleSizeForPlatterWidth:(double)a0;
- (struct CGSize { double x0; double x1; })_explanationSizeForPlatterWidth:(double)a0;

@end
