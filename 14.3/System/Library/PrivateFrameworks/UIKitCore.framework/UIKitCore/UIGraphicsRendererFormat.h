@interface UIGraphicsRendererFormat : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;

+ (id)preferredFormat;
+ (id)defaultFormat;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
