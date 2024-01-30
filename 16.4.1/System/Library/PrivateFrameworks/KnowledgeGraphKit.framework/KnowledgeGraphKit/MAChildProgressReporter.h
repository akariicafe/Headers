@class MAProgressReporter;

@interface MAChildProgressReporter : MAProgressReporter

@property (readonly, nonatomic) MAProgressReporter *parentProgress;
@property (readonly, nonatomic) double offset;
@property (readonly, nonatomic) double scale;

- (id)childProgressWithOffset:(double)a0 scale:(double)a1;
- (BOOL)isCancelled;
- (BOOL)isCancelledWithProgress:(double)a0 currentTime:(double)a1;
- (id)initWithParentProgress:(id)a0 offset:(double)a1 scale:(double)a2;
- (void).cxx_destruct;

@end
