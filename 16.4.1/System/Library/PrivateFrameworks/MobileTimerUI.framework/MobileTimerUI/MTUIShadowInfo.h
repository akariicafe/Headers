@class UIColor;

@interface MTUIShadowInfo : NSObject

@property (copy, nonatomic) UIColor *color;
@property (nonatomic) double radius;
@property (nonatomic) struct CGSize { double width; double height; } offset;
@property (nonatomic) double scale;

- (void).cxx_destruct;
- (id)initWithColor:(id)a0 radius:(double)a1 offset:(struct CGSize { double x0; double x1; })a2 scale:(double)a3;

@end
