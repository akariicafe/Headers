@class CAShapeLayer;

@interface _PKFlatInkColorButton : _PKInkColorButton

@property (retain, nonatomic) CAShapeLayer *fillShapeLayer;
@property (retain, nonatomic) CAShapeLayer *strokeShapeLayer;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithColor:(id)a0 isCompact:(BOOL)a1;

@end
