@interface _PIVideoStabilizeFlowControl : NSObject <ICFlowControl>

@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) double rangeMin;
@property (nonatomic) double rangeMax;
@property (copy, nonatomic) id /* block */ shouldCancelHandler;

- (void).cxx_destruct;
- (BOOL)ICShouldBeCanceled;
- (void)ICReportProgress:(float)a0;

@end
