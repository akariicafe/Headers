@class TRIServerContext, NSObject;
@protocol OS_dispatch_queue, TRITaskQueuing;

@interface TRIXPCServerContextPromise : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fullfillmentQueue;
@property (retain, nonatomic) TRIServerContext *serverContext;
@property (retain, nonatomic) id<TRITaskQueuing> taskQueue;

- (void)fullfillWithContext:(id)a0 taskQueue:(id)a1;
- (void)reject;
- (id)init;
- (void).cxx_destruct;
- (void)addBlockToExecuteAfterPromiseFullfillment:(id /* block */)a0;

@end
