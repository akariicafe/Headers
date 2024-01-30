@protocol MTLDevice;

@interface AGXA11FamilyRasterizationRateMap : _MTLRasterizationRateMap {
    struct WarpFunction { } *_impl;
}

@property (readonly) id<MTLDevice> device;
@property (readonly) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } screenSize;
@property (readonly) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } physicalGranularity;
@property (readonly) unsigned long long layerCount;
@property (readonly) struct { unsigned long long x0; unsigned long long x1; } parameterBufferSizeAndAlign;

- (const struct WarpFunction { } *)getImpl;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (void)dealloc;
- (void)copyParameterDataToBuffer:(id)a0 atOffset:(unsigned long long)a1;
- (struct { float x0; float x1; })physicalCoordinate:(struct { float x0; float x1; })a0 forLayer:(unsigned long long)a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })physicalSizeForLayer:(unsigned long long)a0;
- (void)resetUsingDescriptor:(id)a0;
- (struct { float x0; float x1; })screenCoordinate:(struct { float x0; float x1; })a0 forLayer:(unsigned long long)a1;

@end
