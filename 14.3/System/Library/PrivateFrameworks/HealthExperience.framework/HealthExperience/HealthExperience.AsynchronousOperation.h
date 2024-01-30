@class NSString;

@interface HealthExperience.AsynchronousOperation : NSOperation {
    void /* unknown type, empty encoding */ _autoFinishesOnCancel;
    void /* unknown type, empty encoding */ operationState;
    void /* unknown type, empty encoding */ workLock;
}

@property (nonatomic, readonly) BOOL asynchronous;
@property (nonatomic, readonly) BOOL cancelled;
@property (nonatomic, readonly) BOOL executing;
@property (nonatomic, readonly) BOOL finished;
@property (nonatomic, readonly) NSString *description;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (void)main;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)start;

@end
