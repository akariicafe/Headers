@class NSNumber, CATTaskClient, NSError;

@interface CATRemoteTaskOperation : CATTaskOperation {
    NSError *mClientError;
}

@property (copy, nonatomic) NSNumber *remotePhase;
@property (readonly, nonatomic) CATTaskClient *client;

+ (BOOL)isCancelable;
+ (id)invalidRemoteTaskWithRequest:(id)a0 error:(id)a1;

- (void)processMessage:(id)a0;
- (void)processNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)postNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)clientFailedWithError:(id)a0;
- (BOOL)isAsynchronous;
- (void)updateProgressWithRemoteProgress:(id)a0;
- (id)initWithRequest:(id)a0 clientError:(id)a1;
- (id)initWithRequest:(id)a0 client:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (void)fetchProgress;
- (void)cancelOperationIfNeeded;
- (void)operationWillFinish;
- (void)updateCompletedUnitCount:(long long)a0 andTotalUnitCount:(long long)a1;
- (void)cancel;

@end
