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

- (void)dealloc;
- (void)draw:(id /* block */)a0;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)drawPolygonWithNormalizedPoints:(id)a0;
- (void)drawTextHeaderBar:(id)a0;
- (const struct __CTFont { } *)_createFontWithSize:(double)a0;

@end
