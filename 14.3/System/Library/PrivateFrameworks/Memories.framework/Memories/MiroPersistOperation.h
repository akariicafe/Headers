@class MiroMemory;

@interface MiroPersistOperation : NSOperation {
    BOOL _isFinished;
    BOOL _isExecuting;
}

@property (retain) MiroMemory *memory;

- (void).cxx_destruct;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)start;

@end
