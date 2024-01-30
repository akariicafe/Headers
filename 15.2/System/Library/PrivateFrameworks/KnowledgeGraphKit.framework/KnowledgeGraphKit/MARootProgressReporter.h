@interface MARootProgressReporter : MAProgressReporter {
    double _lastProgressCallTime;
}

@property (readonly, nonatomic) id /* block */ progressBlock;
@property BOOL isCancelled;
@property (readonly) double progress;

- (BOOL)isCancelledWithProgress:(double)a0 currentTime:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (id)childProgressWithOffset:(double)a0 scale:(double)a1;
- (void)cancelOperation;
- (id)initWithProgressBlock:(id /* block */)a0;

@end
