@interface MPSWorkloadStatistics : NSObject

@property (nonatomic) double float32Ops;
@property (nonatomic) double float16Ops;
@property (nonatomic) double integerOps;
@property (nonatomic) double deviceMemoryBytesRead;
@property (nonatomic) double deviceMemoryBytesWrite;
@property (nonatomic) double threadgroupMemoryBytesRead;
@property (nonatomic) double threadgroupMemoryBytesWrite;

+ (id)new;

- (id)init;
- (void)dealloc;

@end
