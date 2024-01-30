@class UILabel, UIColor;

@interface CAMZoomFactorLabel : UIView

@property (readonly, nonatomic) UILabel *_label;
@property (nonatomic) double zoomFactor;
@property (nonatomic) BOOL showZoomFactorSymbol;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL useLeadingZero;
@property (nonatomic) BOOL preferDefaultSizing;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateFont;
- (id)description;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateLabelText;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_labelInsets;

@end
