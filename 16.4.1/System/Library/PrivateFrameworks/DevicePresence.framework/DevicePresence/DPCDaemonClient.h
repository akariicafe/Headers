@class NSString;
@protocol DPCWatchPresenceDelegate;

@interface DPCDaemonClient : NSObject <DPCXPCClientInterface> {
    unsigned long long _currentError;
}

@property unsigned long long currentWatchPresenceStatus;
@property float currentProbablity;
@property (weak, nonatomic) id<DPCWatchPresenceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)informDelegateWithError:(unsigned long long)a0;
- (void)informDelegateWithLatestEvent;
- (void)informDelegateWithWatchStatusEvent:(unsigned long long)a0;
- (void)newErrorDetected:(unsigned long long)a0;
- (void)newWatchPresenceEvent:(unsigned long long)a0 probability:(float)a1;
- (void)newWatchStatusEvent:(unsigned long long)a0;

@end
