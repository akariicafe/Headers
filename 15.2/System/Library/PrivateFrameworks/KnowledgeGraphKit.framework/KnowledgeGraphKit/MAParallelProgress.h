@class MAProgressReporter, MAMutableFloatVector;

@interface MAParallelProgress : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    MAProgressReporter *_progressReporter;
    MAMutableFloatVector *_progressValues;
}

- (void).cxx_destruct;
- (BOOL)isCancelled;
- (BOOL)isCancelledWithProgress:(double)a0 index:(unsigned long long)a1;
- (id)initWithProgressReporter:(id)a0 parallelOperationCount:(unsigned long long)a1;

@end
