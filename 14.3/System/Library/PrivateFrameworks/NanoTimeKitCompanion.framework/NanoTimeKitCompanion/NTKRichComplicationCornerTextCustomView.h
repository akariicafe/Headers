@class UIView;

@interface NTKRichComplicationCornerTextCustomView : NTKRichComplicationCornerBaseTextView {
    UIView *_outerView;
}

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_outerView;
- (double)_outerViewDiameter;

@end
