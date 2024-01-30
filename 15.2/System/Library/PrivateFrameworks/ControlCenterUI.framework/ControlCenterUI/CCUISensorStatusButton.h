@class NSString, UIImageView, CCUISensorActivityData, UILabel, UIView;

@interface CCUISensorStatusButton : UIButton

@property (copy, nonatomic) CCUISensorActivityData *sensorActivityData;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) UIImageView *settingsLaunchIndicatorImageView;
@property (readonly, nonatomic) NSString *bundleIdentifier;

- (void)layoutSubviews;
- (BOOL)showsLargeContentViewer;
- (id)_fontForTitleLabel;
- (void)setHighlighted:(BOOL)a0;
- (void)_layoutSettingsLaunchIndicatorImageView;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_indicatorsWidth;
- (BOOL)scalesLargeContentImage;
- (id)_rightChevronImage;
- (void)_layoutDescriptionLabelIfNecessary;
- (id)initWithSensorActivityData:(id)a0;
- (void).cxx_destruct;
- (id)_imageSymbolConfiguration;
- (id)_plainCircleImage;
- (void)_configureSettingsLaunchIndicatorImageView;
- (void)_layoutIndicatorViewIfNecessary;
- (id)_cameraIndicatorImage;
- (void)_configureIndicatorViewIfNecessary;
- (id)_micIndicatorImage;
- (id)sensorDescription;
- (id)largeContentTitle;
- (void)_configureDescriptionLabelIfNecessary;

@end
