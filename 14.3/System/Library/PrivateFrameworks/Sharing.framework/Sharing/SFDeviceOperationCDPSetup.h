@class NSString, CDPContext, CDPStateController, SFSession, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceOperationCDPSetup : NSObject <CDPUIDelegate> {
    int _cdpApprovalServerState;
    CDPContext *_cdpContext;
    CDPStateController *_cdpController;
    int _cdpSetupRequestState;
    BOOL _invalidateCalled;
    unsigned long long _startTicks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) double metricSeconds;
@property (retain, nonatomic) id presentingViewController;
@property (retain, nonatomic) SFSession *sfSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_run;
- (id)init;
- (void).cxx_destruct;
- (int)_runCDPApprovalServerStart;
- (int)_runCDPSetupRequest;
- (void)uiController:(id)a0 didPresentRootViewController:(id)a1;
- (void)_activate;
- (void)activate;
- (void)_complete:(id)a0;
- (void)invalidate;

@end
