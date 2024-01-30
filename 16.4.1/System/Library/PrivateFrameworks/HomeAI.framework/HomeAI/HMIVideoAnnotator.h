@class NSString;

@interface HMIVideoAnnotator : HMFObject <HMFLogging> {
    struct __CVBuffer { } *_pixelBuffer;
    struct CGContext { } *_context;
    struct CGColorSpace { } *_colorSpace;
    struct __CTFont { } *_font;
    struct CGSize { double width; double height; } _size;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void)draw:(id /* block */)a0;
- (const struct __CTFont { } *)_createFontWithSize:(double)a0;
- (void)drawBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineWidth:(double)a1 text:(id)a2 color:(const double *)a3;
- (void)drawPolygonWithNormalizedPoints:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 width:(double)a1 color:(const double *)a2;
- (void)drawText:(id)a0 at:(struct CGPoint { double x0; double x1; })a1 color:(const double *)a2;
- (void)drawTextHeaderBar:(id)a0;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 fontSize:(double)a1;

@end
