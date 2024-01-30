@class MAParallelProgress;

@interface MAParallelProgressReporter : MAProgressReporter

@property (readonly, nonatomic) MAParallelProgress *parallelProgress;
@property (readonly, nonatomic) unsigned long long index;

- (id)childProgressWithOffset:(double)a0 scale:(double)a1;
- (BOOL)isCancelled;
- (BOOL)isCancelledWithProgress:(double)a0 currentTime:(double)a1;
- (void).cxx_destruct;
- (id)initWithParallelProgress:(id)a0 index:(unsigned long long)a1;
- (BOOL)isCancelledWithProgress:(double)a0;

@end
