@interface UIWindowSceneGeometry : NSObject <NSCopying>

@property (nonatomic, setter=_setSystemFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } systemFrame;
@property (nonatomic, setter=_setInterfaceOrientation:) long long interfaceOrientation;

+ (id)_calculateEffectiveGeometryForWindowScene:(id)a0;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
