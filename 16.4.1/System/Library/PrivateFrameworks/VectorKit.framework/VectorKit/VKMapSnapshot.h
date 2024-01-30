@class NSArray, NSDictionary, VKCamera;

@interface VKMapSnapshot : NSObject <NSSecureCoding> {
    unsigned long long _width;
    unsigned long long _height;
    VKCamera *_vkCamera;
    struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; BOOL x4; } *_displayStyles;
    unsigned long long _displayStylesCount;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) NSArray *images;
@property (retain, nonatomic) NSDictionary *memoryStats;

- (struct CGPoint { double x0; double x1; })pointForCoordinate:(struct { double x0; double x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (id)imageDataInFormat:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (void)enumerateImagesWithBlock:(id /* block */)a0;
- (id)imageSurfaces;
- (void)dealloc;
- (id)_initWithImages:(id)a0 displayStyles:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; BOOL x4; } *)a1 displayStylesCount:(unsigned long long)a2 scale:(double)a3 camera:(id)a4;
- (id)imageSurfaceAtIndex:(unsigned long long)a0;
- (id)description;
- (struct { double x0; double x1; })coordinateForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
