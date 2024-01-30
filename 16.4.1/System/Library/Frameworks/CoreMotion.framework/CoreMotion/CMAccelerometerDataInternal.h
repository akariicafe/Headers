@interface CMAccelerometerDataInternal : NSObject <NSCopying> {
    struct { float x; float y; float z; } fAcceleration;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAcceleration:(struct { float x0; float x1; float x2; })a0;
- (void)setAcceleration:(struct { float x0; float x1; float x2; })a0;

@end
