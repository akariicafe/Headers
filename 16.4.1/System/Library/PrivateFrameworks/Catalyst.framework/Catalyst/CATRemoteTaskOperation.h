@class NSNumber, CATTaskClient, NSError;

@interface CATRemoteTaskOperation : CATTaskOperation {
    NSError *mClientError;
}

@property (copy, nonatomic) NSNumber *remotePhase;
@property (readonly, nonatomic) CATTaskClient *client;

+ (BOOL)isCancelable;
+ (id)invalidRemoteTaskWithRequest:(id)a0 error:(id)a1;

- (void)processNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)clientFailedWithError:(id)a0;
- (void)updateProgressWithRemoteProgress:(id)a0;
- (id)initWithRequest:(id)a0 client:(id)a1;
- (void)postNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)processMessage:(id)a0;
- (void)main;
- (void)updateCompletedUnitCount:(long long)a0 andTotalUnitCount:(long long)a1;
- (void)operationWillFinish;
- (id)initWithRequest:(id)a0 clientError:(id)a1;
- (void)cancel;
- (void)fetchProgress;
- (BOOL)isAsynchronous;
- (void)cancelOperationIfNeeded;
- (void).cxx_destruct;

@end
