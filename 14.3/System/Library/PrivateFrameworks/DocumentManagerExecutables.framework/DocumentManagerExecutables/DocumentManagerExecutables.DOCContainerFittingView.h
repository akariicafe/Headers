@interface DocumentManagerExecutables.DOCContainerFittingView : UIView {
    void /* unknown type, empty encoding */ containedViewController;
    void /* unknown type, empty encoding */ fittingSize;
    void /* unknown type, empty encoding */ preventContentOffsetUpdates;
    void /* unknown type, empty encoding */ observationContext;
}

@property (nonatomic) void /* unknown type, empty encoding */ contentOffsetFromTop;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
