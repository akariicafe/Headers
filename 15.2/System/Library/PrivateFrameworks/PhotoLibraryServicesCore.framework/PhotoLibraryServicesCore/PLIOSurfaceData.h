@interface PLIOSurfaceData : NSData {
    struct __IOSurface { } *_surface;
    const void *_bytes;
    unsigned long long _length;
}

+ (id)dataWithIOSurface:(void *)a0;

- (id)initWithIOSurface:(void *)a0;
- (unsigned long long)length;
- (id)initWithIOSurface:(void *)a0 length:(unsigned long long)a1;
- (const void *)bytes;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
