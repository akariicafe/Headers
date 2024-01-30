@class CALayer;

@interface PUAvalancheStackView : UIView

@property (retain, nonatomic) CALayer *imageLayer;
@property (retain, nonatomic) CALayer *stackLayer0;
@property (retain, nonatomic) CALayer *stackLayer1;
@property (nonatomic) long long contentMode;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)init;
- (void)setImage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageContentFrame;

@end
