@class PKShapeView, UIImageView, CAShapeLayer, UILabel, CAFilter;

@interface PKAddPassButton : UIButton {
    CAShapeLayer *_layer;
    struct CGSize { double width; double height; } _boundsSize;
    PKShapeView *_maskView;
    UIImageView *_iconView;
    UILabel *_singleLineLabel;
    UILabel *_multiLineLabel;
    CAFilter *_highlightFilter;
    BOOL _highlighted;
    struct CGSize { double width; double height; } _iconSize;
    struct CGSize { double width; double height; } _singleLineSize;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _singleLineAlignmentInset;
    struct CGSize { double width; double height; } _multiLineSize;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _multiLineAlignmentInset;
    BOOL _useLayoutMargins;
}

@property (nonatomic) long long addPassButtonStyle;

+ (Class)layerClass;
+ (id)addPassButtonWithStyle:(long long)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)_sharedInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)_createHighlightFilterIfNecessary;
- (void)_applyStyle;
- (id)initWithAddPassButtonStyle:(long long)a0;
- (void)_adjustVisibleLabelWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_intrinsicMultiLineSize;
- (BOOL)_singleLineFitsSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_intrinsicSingleLineSize;

@end
