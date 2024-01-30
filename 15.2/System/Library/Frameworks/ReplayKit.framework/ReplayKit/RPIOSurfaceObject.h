@interface RPIOSurfaceObject : NSObject <NSSecureCoding> {
    struct __IOSurface { } *_ioSurface;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (struct __IOSurface { } *)ioSurface;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)setIOSurface:(struct __IOSurface { } *)a0;

@end
