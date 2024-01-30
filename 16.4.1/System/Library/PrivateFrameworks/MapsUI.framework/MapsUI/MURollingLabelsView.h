@class UIView;

@interface MURollingLabelsView : UIView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_currentLabelAndConstraints;
    void /* unknown type, empty encoding */ $__lazy_storage_$_labelAndConstraintsAnimatingIn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_labelForBaselineAlignment;
    void /* unknown type, empty encoding */ transitioningContentSize;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) UIView *viewForFirstBaselineLayout;
@property (nonatomic, readonly) UIView *viewForLastBaselineLayout;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
