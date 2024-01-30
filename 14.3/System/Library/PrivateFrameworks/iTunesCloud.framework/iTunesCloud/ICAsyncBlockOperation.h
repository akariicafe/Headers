@class NSObject;
@protocol OS_dispatch_queue;

@interface ICAsyncBlockOperation : ICAsyncOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
    id /* block */ _cancellationHandler;
}

@property (readonly, copy, nonatomic) id /* block */ startHandler;
@property (copy, nonatomic) id /* block */ cancellationHandler;

- (void)cancel;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)execute;
- (id)initWithStartHandler:(id /* block */)a0;

@end
