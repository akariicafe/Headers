@class UILabel, UIColor, NSString;

@interface CAMZoomFactorLabel : UIView

@property (readonly, nonatomic) UILabel *_label;
@property (nonatomic) double zoomFactor;
@property (nonatomic) BOOL showZoomFactorSymbol;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL useLeadingZero;
@property (copy, nonatomic) NSString *contentSizeCategory;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)description;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_labelInsets;
- (void)_updateFont;
- (void)_updateLabelText;

@end
