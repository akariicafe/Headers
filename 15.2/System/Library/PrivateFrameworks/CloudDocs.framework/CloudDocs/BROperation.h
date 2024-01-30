@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BROperation : NSOperation <BROperationClient> {
    unsigned char _uuid[16];
    id _executionTransation;
}

@property (readonly, getter=isExecuting) BOOL executing;
@property (readonly, getter=isFinished) BOOL finished;
@property (retain, nonatomic) id remoteOperation;
@property (nonatomic) BOOL waitForRemoteToBeCancelled;
@property (nonatomic) BOOL nonDiscretionary;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteObject;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (oneway void)invalidate;
- (void)dealloc;
- (void)cancel;
- (void)_setExecuting:(BOOL)a0;
- (BOOL)_finishIfCancelled;
- (void)_setRemoteOperation:(id)a0;
- (void)completedWithResult:(id)a0 error:(id)a1;
- (void)_setFinished:(BOOL)a0;
- (oneway void)setRemoteOperationProxy:(id)a0 userInfo:(id)a1;
- (oneway void)progressCallbackWithTopic:(id)a0 userInfo:(id)a1;
- (BOOL)finishIfCancelled;

@end
