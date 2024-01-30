@class UIView;

@interface UIPreviewTarget : NSObject <NSCopying>

@property (readonly, nonatomic) UIView *container;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } center;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContainer:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (BOOL)isEqual:(id)a0;
- (id)initWithContainer:(id)a0 center:(struct CGPoint { double x0; double x1; })a1;

@end
