@class NSString, UIView, MTVisualStylingProvider, MTMaterialView;

@interface FCUIOnboardingStackedNotificationView : UIView {
    MTMaterialView *_backgroundMaterialView;
    MTVisualStylingProvider *_visualStylingProvider;
    NSString *_assetImageName;
    UIView *_assetView;
    UIView *_line1TextView;
    UIView *_line2TextView;
}

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_configureViewIfNecessary;
- (id)initWithBackgroundColor:(id)a0 assetImageName:(id)a1;

@end
