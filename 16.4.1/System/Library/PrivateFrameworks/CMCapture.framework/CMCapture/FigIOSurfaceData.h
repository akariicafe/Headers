@interface FigIOSurfaceData : NSData {
    struct __IOSurface { } *_surface;
    unsigned long long _length;
    const void *_bytes;
}

+ (void)initialize;
+ (id)dataWithIOSurface:(struct __IOSurface { } *)a0;
+ (id)dataWithIOSurface:(struct __IOSurface { } *)a0 length:(unsigned long long)a1;

- (id)initWithIOSurface:(struct __IOSurface { } *)a0;
- (const void *)bytes;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0 length:(unsigned long long)a1;

@end
