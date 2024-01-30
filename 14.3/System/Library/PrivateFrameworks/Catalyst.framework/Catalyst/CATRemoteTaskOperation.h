@class NSNumber, CATTaskClient, NSError;

@interface CATRemoteTaskOperation : CATTaskOperation {
    NSError *mClientError;
}

@property (copy, nonatomic) NSNumber *remotePhase;
@property (readonly, nonatomic) CATTaskClient *client;

+ (id)invalidRemoteTaskWithRequest:(id)a0 error:(id)a1;
+ (BOOL)isCancelable;

- (void)cancel;
- (void)processNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)processMessage:(id)a0;
- (void).cxx_destruct;
- (void)main;
- (void)updateCompletedUnitCount:(long long)a0 andTotalUnitCount:(long long)a1;
- (BOOL)isAsynchronous;
- (void)updateProgressWithRemoteProgress:(id)a0;
- (id)initWithRequest:(id)a0 client:(id)a1;
- (void)cancelOperationIfNeeded;
- (void)operationWillFinish;
- (void)fetchProgress;
- (void)postNotificationWithName:(id)a0 userInfo:(id)a1;
- (id)initWithRequest:(id)a0 clientError:(id)a1;
- (void)clientFailedWithError:(id)a0;

@end
