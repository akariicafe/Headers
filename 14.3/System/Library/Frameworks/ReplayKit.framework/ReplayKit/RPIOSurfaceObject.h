@interface RPIOSurfaceObject : NSObject <NSSecureCoding> {
    struct __IOSurface { } *_ioSurface;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (struct __IOSurface { } *)ioSurface;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setIOSurface:(struct __IOSurface { } *)a0;

@end
