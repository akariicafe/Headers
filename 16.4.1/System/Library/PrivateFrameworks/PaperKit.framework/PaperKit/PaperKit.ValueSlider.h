@interface PaperKit.ValueSlider : UIControl {
    void /* unknown type, empty encoding */ leadingContentView;
    void /* unknown type, empty encoding */ trailingContentView;
    void /* unknown type, empty encoding */ slider;
    void /* unknown type, empty encoding */ contentStackView;
    void /* unknown type, empty encoding */ contentStackViewSpacing;
    void /* unknown type, empty encoding */ minimumContentSizeHeight;
    void /* unknown type, empty encoding */ minValue;
    void /* unknown type, empty encoding */ maxValue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_currentValue;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didChangeSlider;
- (void)didFinishChangingSlider;
- (void)didStartChangingSlider;

@end
