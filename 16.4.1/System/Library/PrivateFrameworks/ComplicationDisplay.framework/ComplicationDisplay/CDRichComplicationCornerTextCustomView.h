@class UIView;

@interface CDRichComplicationCornerTextCustomView : CDRichComplicationCornerBaseTextView {
    UIView *_outerView;
}

- (void)layoutSubviews;
- (id)_outerView;
- (void).cxx_destruct;
- (double)_outerViewDiameter;
- (id)initWithFontFallback:(long long)a0;

@end
