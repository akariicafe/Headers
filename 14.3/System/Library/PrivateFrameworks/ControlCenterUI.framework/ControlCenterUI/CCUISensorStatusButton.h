@class NSString, UIImageView, CCUISensorActivityData, UILabel, UIView;

@interface CCUISensorStatusButton : UIButton

@property (copy, nonatomic) CCUISensorActivityData *sensorActivityData;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) UIImageView *settingsLaunchIndicatorImageView;
@property (readonly, nonatomic) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)largeContentTitle;
- (id)_imageSymbolConfiguration;
- (void)layoutSubviews;
- (BOOL)scalesLargeContentImage;
- (BOOL)showsLargeContentViewer;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithSensorActivityData:(id)a0;
- (double)_indicatorsWidth;
- (void)_configureDescriptionLabelIfNecessary;
- (void)_configureIndicatorViewIfNecessary;
- (void)_configureSettingsLaunchIndicatorImageView;
- (void)_layoutIndicatorViewIfNecessary;
- (void)_layoutDescriptionLabelIfNecessary;
- (void)_layoutSettingsLaunchIndicatorImageView;
- (id)_cameraIndicatorImage;
- (id)_micIndicatorImage;
- (id)_plainCircleImage;
- (id)_fontForTitleLabel;
- (id)sensorDescription;
- (id)_rightChevronImage;

@end
