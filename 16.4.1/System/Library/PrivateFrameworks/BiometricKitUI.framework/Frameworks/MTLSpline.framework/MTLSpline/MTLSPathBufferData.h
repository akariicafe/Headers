@class MTLSAnimatablePathCollection;
@protocol MTLDevice, MTLBuffer;

@interface MTLSPathBufferData : NSObject

@property void /* unknown type, empty encoding */ viewRatio;
@property (retain) MTLSAnimatablePathCollection *collection;
@property (readonly) id<MTLDevice> device;
@property (readonly) id<MTLBuffer> tessellationFactors;
@property (readonly) id<MTLBuffer> controlPoints;
@property (readonly) id<MTLBuffer> indices;
@property (readonly) id<MTLBuffer> patchInfo;
@property (readonly) id<MTLBuffer> instanceInfo;

- (void)commit;
- (void).cxx_destruct;
- (id)initWithCollection:(SEL)a0 device:(id)a1 viewRatio:(id)a2;
- (void)updateControlPointBufferWithData:(struct ControlPoint { float x0; } *)a0 count:(unsigned long long)a1;
- (void)updateInstanceBufferWithData:(struct InstanceInfo { struct { void /* unknown type, empty encoding */ x0[4]; } x0; } *)a0 count:(unsigned long long)a1;
- (id)initWithDefaultPath:(SEL)a0 device:(id)a1 viewRatio:(id)a2;
- (id)initWithDevice:(SEL)a0 viewRatio:(id)a1;

@end
