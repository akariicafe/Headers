@class NSString;

@interface MTLGPUDebugCommandQueue : MTLToolsCommandQueue

@property (readonly, nonatomic) NSString *tracePath;

- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (id)commandBufferWithDescriptor:(id)a0;
- (id)initWithCommandQueue:(id)a0 device:(id)a1;

@end
