@class NSError, NSObject;
@protocol OS_dispatch_queue;

@interface MSVAsyncOperation : NSOperation

@property (copy, nonatomic) NSError *error;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, getter=_isExecuting, setter=_setExecuting:) BOOL _executing;
@property (nonatomic, getter=_isFinished, setter=_setFinished:) BOOL _finished;

- (void)execute;
- (void)finish;
- (BOOL)isConcurrent;
- (BOOL)isFinished;
- (void)finishWithError:(id)a0;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (void).cxx_destruct;
- (id)init;

@end
