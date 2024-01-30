@interface PIVideoReframeDebugSubject : PIReframeSubject

@property struct CGVector { double dx; double dy; } velocity;
@property struct CGVector { double dx; double dy; } acceleration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
