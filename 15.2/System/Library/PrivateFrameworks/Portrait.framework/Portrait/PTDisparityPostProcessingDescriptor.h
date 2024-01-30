@class NSString;
@protocol MTLCommandQueue;

@interface PTDisparityPostProcessingDescriptor : NSObject

@property (readonly, retain) id<MTLCommandQueue> commandQueue;
@property (readonly) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } disparitySize;
@property (readonly) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } filteredDisparitySize;
@property (readonly) unsigned long long disparityPixelFormat;
@property (readonly) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } colorSize;
@property (readonly) unsigned long long colorPixelFormat;
@property (readonly) NSString *sensorPort;

- (void).cxx_destruct;
- (id)initWithCommandQueue:(id)a0 disparitySize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 filteredDisparitySize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 disparityPixelFormat:(unsigned long long)a3 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 colorPixelFormat:(unsigned long long)a5 sensorPort:(id)a6;

@end
