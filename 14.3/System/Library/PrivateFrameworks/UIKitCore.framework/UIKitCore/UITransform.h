@class NSString;

@interface UITransform : NSObject <BSDescriptionProviding, NSCopying>

@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scale:(double)a0;
+ (id)identity;
+ (id)scaleX:(double)a0 scaleY:(double)a1;
+ (id)rotationWithRadians:(double)a0;
+ (id)transformWithCGAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
+ (id)rotationWithDegrees:(long long)a0;
+ (id)translation:(struct CGPoint { double x0; double x1; })a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;

@end
