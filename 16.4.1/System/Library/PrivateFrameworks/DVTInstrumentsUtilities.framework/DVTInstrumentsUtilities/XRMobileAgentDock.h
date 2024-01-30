@class NSString, NSMutableArray, XRMobileAgent;

@interface XRMobileAgentDock : NSObject <XRMobileAgentStop> {
    BOOL _agentExecuted;
    BOOL _abandoned;
    NSMutableArray *_waitingAgents;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _cond;
}

@property (retain, nonatomic) XRMobileAgent *dockedAgent;
@property (readonly, nonatomic) int agentStopDiagnosticsTypeCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)abandon;
- (id)init;
- (void).cxx_destruct;
- (void)releaseDockedAgent;
- (BOOL)waitForAgentToDock;
- (void)executeDockedAgent;
- (void)receiveMobileAgent:(id)a0;

@end
