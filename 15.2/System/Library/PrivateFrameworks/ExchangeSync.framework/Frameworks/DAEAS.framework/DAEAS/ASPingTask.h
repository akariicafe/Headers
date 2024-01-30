@class NSSet;

@interface ASPingTask : ASTask {
    NSSet *_folders;
    NSSet *_oldFolders;
    int _seconds;
    int _oldSeconds;
}

- (id)requestBody;
- (double)timeoutInterval;
- (void)finishWithError:(id)a0;
- (id)folders;
- (void).cxx_destruct;
- (void)loadRequest:(id)a0;
- (void)requestCancelTaskWithReason:(int)a0;
- (BOOL)shouldHoldPowerAssertion;
- (int)heartbeat;
- (long long)taskStatusForExchangeStatus:(int)a0;
- (int)commandCode;
- (BOOL)getTopLevelToken:(char *)a0 outStatusCodePage:(char *)a1 outStatusToken:(char *)a2;
- (BOOL)processContext:(id)a0;
- (BOOL)shouldStallAfterConnectionLost;
- (id)initWithHeartbeat:(int)a0 folders:(id)a1 oldHeartbeat:(int)a2 oldFolders:(id)a3;
- (int)interfaceBinding;
- (BOOL)shouldHandleServerErrorRetryLater;
- (BOOL)shouldReportTimeInNetwork;

@end
