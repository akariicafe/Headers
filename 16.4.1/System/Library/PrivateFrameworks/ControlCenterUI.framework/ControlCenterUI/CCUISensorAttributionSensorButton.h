@class UILabel, CCUISensorActivityData, UIView;

@interface CCUISensorAttributionSensorButton : UIButton

@property (retain, nonatomic) UIView *indicatorView;
@property (readonly, nonatomic) CCUISensorActivityData *sensorActivityData;
@property (readonly, nonatomic) unsigned long long sensorType;
@property (readonly, nonatomic) UILabel *descriptionLabel;
@property (readonly, nonatomic) UIView *sensorIconView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedExpandedRect;

- (BOOL)scalesLargeContentImage;
- (id)_fontForTitleLabel;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)showsLargeContentViewer;
- (id)largeContentTitle;
- (void)_layoutDescriptionLabel;
- (void).cxx_destruct;
- (double)_indicatorWidth;
- (void)_enableUserInteractionForLargeContentViewerIfNeeded;
- (void)_layoutIndicatorView;
- (id)initWithSensorActivityData:(id)a0;

@end
