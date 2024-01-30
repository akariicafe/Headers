@class UILabel, UIActivityIndicatorView;

@interface PXProtoFeatureLoadingPlaceholderView : PXProtoFeaturePlaceholderView {
    UIActivityIndicatorView *_spinner;
    UILabel *_label;
}

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateLabelText;
- (BOOL)wantsContentView;
- (void)statusDescriptionDidChange;

@end
