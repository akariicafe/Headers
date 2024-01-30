@class NSSet;

@interface ASPingTask : ASTask {
    NSSet *_folders;
    NSSet *_oldFolders;
    int _seconds;
    int _oldSeconds;
}

- (double)timeoutInterval;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)folders;
- (void)requestCancelTaskWithReason:(int)a0;
- (BOOL)shouldHoldPowerAssertion;
- (id)requestBody;
- (void)loadRequest:(id)a0;
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
