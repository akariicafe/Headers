@class UILabel, WFContentCoercionNode, CAShapeLayer;

@interface WFContentCoercionNodeView : UIView

@property (weak, nonatomic) CAShapeLayer *outlineLayer;
@property (weak, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) WFContentCoercionNode *node;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateColors;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;

@end
