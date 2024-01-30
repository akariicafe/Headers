@class NSString;

@interface CompandedRawBayerPreProcessor : NSObject <MOVStreamPreProcessor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct __CVBuffer { } *)processedPixelBufferCopyOf:(struct __CVBuffer { } *)a0 streamData:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; struct __CVPixelBufferPool *x12; id x13; id x14; id x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; unsigned long long x17; id x18; } *)a1 error:(id *)a2;
- (const struct opaqueCMFormatDescription { } *)formatDescriptionForPixelBuffer:(struct __CVBuffer { } *)a0 streamData:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; struct __CVPixelBufferPool *x12; id x13; id x14; id x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; unsigned long long x17; id x18; } *)a1;
- (const struct opaqueCMFormatDescription { } *)trackFormatDescriptionFromStreamData:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; struct __CVPixelBufferPool *x12; id x13; id x14; id x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; unsigned long long x17; id x18; } *)a0;
- (unsigned int)inputPixelFormatFromStreamData:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; struct __CVPixelBufferPool *x12; id x13; id x14; id x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; unsigned long long x17; id x18; } *)a0;
- (unsigned int)encodedPixelFormatFromStreamData:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; struct __CVPixelBufferPool *x12; id x13; id x14; id x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; unsigned long long x17; id x18; } *)a0;

@end
