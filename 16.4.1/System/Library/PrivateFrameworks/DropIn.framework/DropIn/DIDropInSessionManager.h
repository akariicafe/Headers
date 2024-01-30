@class DIDropInSession, DIXPCConnectionManager;
@protocol DIDropInSessionManagerDelegate;

@interface DIDropInSessionManager : NSObject <DISessionStatusDelegate, DIXPCManagerCheckInObserver>

@property (readonly, weak, nonatomic) DIXPCConnectionManager *connectionManager;
@property (retain, nonatomic) DIDropInSession *activeSession;
@property (copy, nonatomic) DIDropInSession *incomingPendingSession;
@property (weak, nonatomic) id<DIDropInSessionManagerDelegate> delegate;

- (void)session:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)didUpdateSession:(id)a0;
- (void)session:(id)a0 didUpdateUplinkMuteStatus:(BOOL)a1;
- (void)didAddSession:(id)a0;
- (void)didRemoveSession:(id)a0;
- (id)initWithConnectionManager:(id)a0;
- (void)xpcManagerDidPerformDaemonCheckIn:(id)a0;

@end
