@class UILabel, UIActivityIndicatorView;

@interface PXProtoFeatureLoadingPlaceholderView : PXProtoFeaturePlaceholderView {
    UIActivityIndicatorView *_spinner;
    UILabel *_label;
}

- (void)_updateLabelText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)statusDescriptionDidChange;
- (BOOL)wantsContentView;

@end
