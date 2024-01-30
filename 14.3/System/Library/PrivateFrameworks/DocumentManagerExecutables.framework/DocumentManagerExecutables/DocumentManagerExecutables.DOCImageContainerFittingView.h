@interface DocumentManagerExecutables.DOCImageContainerFittingView : UIView <DOCFittingImageViewDelegate> {
    void /* unknown type, empty encoding */ imageIsFolder;
    void /* unknown type, empty encoding */ shadowView;
    void /* unknown type, empty encoding */ imageView;
}

@property (nonatomic) void /* unknown type, empty encoding */ contentOffsetFromTop;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)fittingImageViewDidLayout:(id)a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
