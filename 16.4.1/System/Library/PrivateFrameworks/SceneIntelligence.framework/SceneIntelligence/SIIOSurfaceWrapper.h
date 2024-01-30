@interface SIIOSurfaceWrapper : NSObject

@property (nonatomic) struct __IOSurface { } *iosurface;

- (void)dealloc;
- (id)initWithResolution:(struct CGSize { double x0; double x1; })a0;
- (id)initWithResolution:(struct CGSize { double x0; double x1; })a0 pixelformat:(unsigned int)a1;
- (unsigned long long)_bytesPerElement:(unsigned int)a0;
- (id)initWithIOSurfaceBuffer:(struct __IOSurface { } *)a0;

@end
