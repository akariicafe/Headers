@class UILabel, PSGUnderlineButton, UIColor;

@interface PSGMultitaskingGestureExplanationView : UIView <PSHeaderFooterView> {
    UILabel *_labels[4];
    PSGUnderlineButton *_videoLinkButton;
    double _sized;
    double _width;
    UIColor *_footerTextColor;
}

- (BOOL)isRTL;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (id)initWithSpecifier:(id)a0;
- (id)newRegionSampleLabelUnderlined;
- (id)_accessibilityLabels;

@end
