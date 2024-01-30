@class UILabel, NSString;

@interface PKDiscoveryInlineMediaCaptionView : PKDiscoveryShelfView {
    UILabel *_captionLabel;
    NSString *_captionText;
}

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithCaptionText:(id)a0;

@end
