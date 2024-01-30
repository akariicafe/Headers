@class NSString;

@interface MTLCountersCommandQueue : MTLToolsCommandQueue

@property (readonly, nonatomic) NSString *tracePath;

- (id)commandBufferWithUnretainedReferences;
- (id)commandBufferWithDescriptor:(id)a0;
- (id)commandBuffer;
- (id)initWithCommandQueue:(id)a0 device:(id)a1;

@end
