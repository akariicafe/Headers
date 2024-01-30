@class MiroMemory;

@interface MiroPersistOperation : NSOperation {
    BOOL _isFinished;
    BOOL _isExecuting;
}

@property (retain) MiroMemory *memory;

- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (void).cxx_destruct;

@end
