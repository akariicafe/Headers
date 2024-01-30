@class UILabel;

@interface _TVInspectorHighlightMetadataView : UIView

@property (readonly, nonatomic) UILabel *descriptionLabel;
@property (readonly, nonatomic) UILabel *frameLabel;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
