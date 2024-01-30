@class NSError, NSObject;
@protocol OS_dispatch_queue;

@interface MSVAsyncOperation : NSOperation

@property (copy, nonatomic) NSError *error;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, getter=_isExecuting, setter=_setExecuting:) BOOL _executing;
@property (nonatomic, getter=_isFinished, setter=_setFinished:) BOOL _finished;

- (void)finish;
- (void)finishWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)execute;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isConcurrent;

@end
