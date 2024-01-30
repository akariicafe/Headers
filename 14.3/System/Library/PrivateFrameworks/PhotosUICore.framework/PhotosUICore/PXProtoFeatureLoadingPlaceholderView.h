@class UILabel, UIActivityIndicatorView;

@interface PXProtoFeatureLoadingPlaceholderView : PXProtoFeaturePlaceholderView {
    UIActivityIndicatorView *_spinner;
    UILabel *_label;
}

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (BOOL)wantsContentView;
- (void)statusDescriptionDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLabelText;

@end
