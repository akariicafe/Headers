@class UIColor, NSString, UIView;

@interface CPSLabelWithPlaceholder : UILabel {
    UIView *_placeholderView;
    NSString *_text;
}

@property (retain, nonatomic) UIColor *placeholderColor;
@property (nonatomic) double placeholderWidth;

- (void)setAttributedText:(id)a0;
- (void)_commonInit;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)text;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (void)_placeholderInputsDidChange;
- (struct CGSize { double x0; double x1; })_desiredPlaceholderSize;

@end
