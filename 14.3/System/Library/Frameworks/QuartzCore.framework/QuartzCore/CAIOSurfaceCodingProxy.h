@interface CAIOSurfaceCodingProxy : CACodingProxy {
    struct __IOSurface { } *_surface;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithObject:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)decodedObject;
- (void)encodeWithCoder:(id)a0;

@end
