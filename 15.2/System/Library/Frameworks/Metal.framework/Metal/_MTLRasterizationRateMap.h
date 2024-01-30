@class NSString;
@protocol MTLDevice;

@interface _MTLRasterizationRateMap : NSObject <MTLRasterizationRateMapSPI> {
    id<MTLDevice> _device;
    NSString *_label;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _dim;
}

@property (readonly) id<MTLDevice> device;
@property (readonly) NSString *label;
@property (readonly) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } screenSize;
@property (readonly) unsigned long long layerCount;
@property (readonly) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } physicalGranularity;
@property (readonly) struct { unsigned long long x0; unsigned long long x1; } parameterBufferSizeAndAlign;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (id)init;
- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;
- (void)copyParameterDataToBuffer:(id)a0 atOffset:(unsigned long long)a1;
- (void)copyParameterDataToBuffer:(id)a0 offset:(unsigned long long)a1;
- (struct { float x0; float x1; })physicalCoordinate:(struct { float x0; float x1; })a0 forLayer:(unsigned long long)a1;
- (struct { float x0; float x1; })screenCoordinate:(struct { float x0; float x1; })a0 forLayer:(unsigned long long)a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })physicalSizeForLayer:(unsigned long long)a0;
- (struct { float x0; float x1; })mapScreenToPhysicalCoordinates:(struct { float x0; float x1; })a0 forLayer:(unsigned long long)a1;
- (struct { float x0; float x1; })mapPhysicalToScreenCoordinates:(struct { float x0; float x1; })a0 forLayer:(unsigned long long)a1;

@end
