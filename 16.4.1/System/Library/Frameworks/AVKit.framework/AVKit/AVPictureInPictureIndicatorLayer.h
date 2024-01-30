@class AVPictureInPictureIndicatorSublayer, NSString;

@interface AVPictureInPictureIndicatorLayer : CALayer

@property (readonly, nonatomic) AVPictureInPictureIndicatorSublayer *contentLayer;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoRectWhenPIPBegan;
@property (copy, nonatomic) NSString *customText;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (id)initWithDisplayScale:(double)a0 placeholderImage:(struct CGImage { } *)a1 opaque:(BOOL)a2 videoRectWhenPIPBegan:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end
