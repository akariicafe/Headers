@class UIView;

@interface NCNotificationSummaryOnboardingButton : UIButton {
    UIView *_backgroundView;
}

- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (void)_configureBackgroundViewIfNecessary;
- (void).cxx_destruct;
- (void)_layoutBackgroundView;

@end
