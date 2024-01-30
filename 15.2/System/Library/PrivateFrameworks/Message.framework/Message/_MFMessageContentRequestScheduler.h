@class NSString, EDMessagePersistence;
@protocol EFScheduler;

@interface _MFMessageContentRequestScheduler : NSObject <EFScheduler> {
    unsigned long long _requestID;
}

@property (retain, nonatomic) id<EFScheduler> scheduler;
@property (retain, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performSyncBlock:(id /* block */)a0;
- (void)performSyncBarrierBlock:(id /* block */)a0;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (void)performVoucherPreservingBlock:(id /* block */)a0;
- (id)performWithObject:(id)a0;
- (id)performCancelableBlock:(id /* block */)a0;
- (void)performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithScheduler:(id)a0 requestID:(unsigned long long)a1 messagePersistence:(id)a2;
- (void)performBlockWithActivity:(id /* block */)a0 requestID:(unsigned long long)a1;
- (id)initWithScheduler:(id)a0 messagePersistence:(id)a1;

@end
