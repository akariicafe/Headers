@class UIView;

@interface NCNotificationSummaryOnboardingButton : UIButton {
    UIView *_backgroundView;
}

- (void)_configureBackgroundViewIfNecessary;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_layoutBackgroundView;

@end
