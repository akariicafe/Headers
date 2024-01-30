@interface MALegacyProgressReporter : MAProgressReporter {
    double _lastProgressCallTime;
}

@property (nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) id /* block */ progressBlock;

- (id)childProgressWithOffset:(double)a0 scale:(double)a1;
- (BOOL)isCancelledWithProgress:(double)a0 currentTime:(double)a1;
- (id)initWithProgressBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
