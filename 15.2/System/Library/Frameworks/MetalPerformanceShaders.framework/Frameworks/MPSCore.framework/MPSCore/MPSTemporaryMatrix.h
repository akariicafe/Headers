@interface MPSTemporaryMatrix : MPSMatrix

@property (nonatomic) unsigned long long readCount;

+ (id)temporaryMatrixWithCommandBuffer:(id)a0 matrixDescriptor:(id)a1;
+ (void)prefetchStorageWithCommandBuffer:(id)a0 matrixDescriptorList:(id)a1;

- (void)synchronizeOnCommandBuffer:(id)a0;
- (id)initWithCommandBuffer:(id)a0 matrixDescriptor:(id)a1;

@end
