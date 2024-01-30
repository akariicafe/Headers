@class FigMetalExecutionStatus;

@interface InterceptConfig : NSObject

@property (nonatomic) int interceptLevel;
@property (retain, nonatomic) FigMetalExecutionStatus *executionStatus;
@property (nonatomic) BOOL waitUntilCompleted;
@property (nonatomic) BOOL waitUntilScheduled;

- (id)initWithLevel:(int)a0;
- (void).cxx_destruct;
- (void)loadExperimentsConfig;

@end
