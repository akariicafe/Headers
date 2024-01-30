@interface FigIOSurfaceData : NSData {
    struct __IOSurface { } *_surface;
    unsigned long long _length;
    const void *_bytes;
}

+ (void)initialize;
+ (id)dataWithIOSurface:(struct __IOSurface { } *)a0;
+ (id)dataWithIOSurface:(struct __IOSurface { } *)a0 length:(unsigned long long)a1;

- (id)initWithIOSurface:(struct __IOSurface { } *)a0;
- (unsigned long long)length;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0 length:(unsigned long long)a1;
- (const void *)bytes;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
