@class CALayer;

@interface ICAttachmentBrickSmallMapViewV2 : ICAttachmentBrickImageViewV2

@property (retain, nonatomic) CALayer *borderLayer;
@property (retain, nonatomic) CALayer *effectsLayer;

- (void).cxx_destruct;
- (void)setContentsScale:(double)a0;
- (void)setCornerRadius:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateSublayersBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
