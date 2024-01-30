@class UILabel;

@interface PXProtoTextualFeatureView : PXProtoFeatureView {
    UILabel *_label;
}

- (void)updateContent;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })minimumMargins;
- (struct CGSize { double x0; double x1; })regularContentSize;
- (struct CGSize { double x0; double x1; })compactContentSize;

@end
