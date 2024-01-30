@class NSString;
@protocol MTLDevice;

@interface MTLToolsRasterizationRateMap : MTLToolsObject <MTLRasterizationRateMapSPI>

@property (readonly, nonatomic) unsigned long long mutability;
@property (readonly, nonatomic) float minFactor;
@property (readonly) id<MTLDevice> device;
@property (readonly) NSString *label;
@property (readonly) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } screenSize;
@property (readonly) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } physicalGranularity;
@property (readonly) unsigned long long layerCount;
@property (readonly) struct { unsigned long long x0; unsigned long long x1; } parameterBufferSizeAndAlign;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)formattedDescription:(unsigned long long)a0;
- (void)copyParameterDataToBuffer:(id)a0 offset:(unsigned long long)a1;
- (struct { float x0; float x1; })mapPhysicalToScreenCoordinates:(struct { float x0; float x1; })a0 forLayer:(unsigned long long)a1;
- (struct { float x0; float x1; })mapScreenToPhysicalCoordinates:(struct { float x0; float x1; })a0 forLayer:(unsigned long long)a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })physicalSizeForLayer:(unsigned long long)a0;
- (void)resetUsingDescriptor:(id)a0;

@end
