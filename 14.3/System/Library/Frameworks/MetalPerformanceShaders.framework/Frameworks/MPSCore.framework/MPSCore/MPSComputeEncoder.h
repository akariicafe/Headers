@class NSString;
@protocol MTLDevice, MTLComputeCommandEncoder;

@interface MPSComputeEncoder : NSObject <MTLComputeCommandEncoder, MTLCommandEncoder> {
    id<MTLComputeCommandEncoder> _encoder;
}

@property (readonly) unsigned long long dispatchType;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)computeCommandEncoder;
- (id)initWithCommandBuffer:(id)a0 withDispatchType:(unsigned long long)a1;

@end
