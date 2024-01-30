@class UILabel, PSGUnderlineButton, UIColor;

@interface PSGMultitaskingGestureExplanationView : UIView <PSHeaderFooterView> {
    UILabel *_labels[4];
    PSGUnderlineButton *_videoLinkButton;
    double _sized;
    double _width;
    UIColor *_footerTextColor;
}

- (id)initWithSpecifier:(id)a0;
- (BOOL)isRTL;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (void)layoutSubviews;
- (id)newRegionSampleLabelUnderlined;
- (id)_accessibilityLabels;

@end
