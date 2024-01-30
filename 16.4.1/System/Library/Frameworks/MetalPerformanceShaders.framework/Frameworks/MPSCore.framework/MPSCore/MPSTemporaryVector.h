@interface MPSTemporaryVector : MPSVector

@property (nonatomic) unsigned long long readCount;

+ (void)prefetchStorageWithCommandBuffer:(id)a0 descriptorList:(id)a1;
+ (id)temporaryVectorWithCommandBuffer:(id)a0 descriptor:(id)a1;

- (id)initWithCommandBuffer:(id)a0 descriptor:(id)a1;
- (void)synchronizeOnCommandBuffer:(id)a0;

@end
