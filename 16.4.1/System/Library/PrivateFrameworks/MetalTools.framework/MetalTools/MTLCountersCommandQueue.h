@class NSString;

@interface MTLCountersCommandQueue : MTLToolsCommandQueue

@property (readonly, nonatomic) NSString *tracePath;

- (id)commandBufferWithDescriptor:(id)a0;
- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (id)initWithCommandQueue:(id)a0 device:(id)a1;

@end
