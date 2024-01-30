@class NSMutableArray;

@interface FigMetalExecutionStatus : NSObject

@property (retain, nonatomic) NSMutableArray *failedCommandBuffers;
@property (nonatomic) unsigned long long status;
@property (nonatomic) int completedCommandBuffersCount;

- (void).cxx_destruct;
- (id)init;

@end
