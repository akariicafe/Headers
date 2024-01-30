@interface VCPSaliencyRegion : NSObject

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bound;
@property float confidence;

+ (void)attachSalientRegions:(id)a0 toPixelBuffer:(struct __CVBuffer { } *)a1;
+ (id)salientRegionsFromPixelBuffer:(struct __CVBuffer { } *)a0;

- (id)plistRepresentation;
- (id)initWithPlistRepresentation:(id)a0;
- (id)initWith:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 confidence:(float)a1;

@end
