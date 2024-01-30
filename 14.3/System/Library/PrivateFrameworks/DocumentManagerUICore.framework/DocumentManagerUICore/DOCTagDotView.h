@class CALayer, NSString, CAShapeLayer;

@interface DOCTagDotView : UIView <DOCTagIconView>

@property (readonly, nonatomic) CAShapeLayer *noneDotLayer;
@property (readonly, nonatomic) CAShapeLayer *dotLayer;
@property (readonly, nonatomic) CALayer *checkmarkLayer;
@property (nonatomic) BOOL checked;
@property (nonatomic) struct CGSize { double width; double height; } dotSize;
@property (nonatomic) long long tagColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSublayersOfLayer:(id)a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayoutOfLayers;

@end
