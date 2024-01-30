@class NUPixelFormat, NUColorSpace, NSString;

@interface NUCVPixelBuffer : NSObject <NUImageBuffer>

@property (readonly, nonatomic) struct __CVBuffer { } *CVPixelBuffer;
@property (readonly, nonatomic) struct { long long x0; long long x1; } size;
@property (readonly, nonatomic) NUPixelFormat *format;
@property (readonly, nonatomic) NUColorSpace *colorSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugQuickLookObject;
- (id)CIImageProcessorDigestObject;
- (void)dealloc;
- (id)init;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0;

@end
