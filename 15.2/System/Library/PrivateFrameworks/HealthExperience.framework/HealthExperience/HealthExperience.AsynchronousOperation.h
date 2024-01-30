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

- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (void)main;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isCancelled;
- (void)cancel;

@end
