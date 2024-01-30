@class NSString;

@interface HMIVideoAnnotator : HMFObject <HMFLogging> {
    struct opaqueCMSampleBuffer { } *_sbuf;
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

- (void)draw:(id /* block */)a0;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)dealloc;
- (const struct __CTFont { } *)_createFontWithSize:(double)a0;
- (void)drawTextHeaderBar:(id)a0;
- (void)drawPolygonWithNormalizedPoints:(id)a0;
- (void)drawRectWithCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(float)a1;
- (void)drawText:(id)a0 at:(struct CGPoint { double x0; double x1; })a1;

@end
