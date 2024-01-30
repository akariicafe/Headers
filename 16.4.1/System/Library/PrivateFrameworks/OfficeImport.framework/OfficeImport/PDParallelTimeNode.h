@class PDParallelTimeNodeBuildInfo;

@interface PDParallelTimeNode : PDTimeNode

@property (retain) PDParallelTimeNodeBuildInfo *buildInfo;

- (void).cxx_destruct;

@end
