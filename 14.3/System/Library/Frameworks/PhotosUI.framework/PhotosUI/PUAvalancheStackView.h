@class CALayer;

@interface PUAvalancheStackView : UIView

@property (retain, nonatomic) CALayer *imageLayer;
@property (retain, nonatomic) CALayer *stackLayer0;
@property (retain, nonatomic) CALayer *stackLayer1;
@property (nonatomic) long long contentMode;

- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageContentFrame;
- (void)layoutSubviews;
- (void)setImage:(id)a0;

@end
