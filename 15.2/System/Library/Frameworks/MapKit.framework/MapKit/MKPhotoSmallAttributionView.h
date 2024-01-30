@class _MKUILabel, UIView;

@interface MKPhotoSmallAttributionView : UIView {
    _MKUILabel *_label;
    UIView *_backgroundView;
    struct CGSize { double width; double height; } _labelSize;
}

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithMapItem:(id)a0;
- (id)attributionFont;
- (void).cxx_destruct;

@end
