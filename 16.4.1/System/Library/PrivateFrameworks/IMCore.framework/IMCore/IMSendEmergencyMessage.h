@class IMDaemonController;
@protocol IMDaemonProtocol;

@interface IMSendEmergencyMessage : NSObject

@property (retain, nonatomic) IMDaemonController<IMDaemonProtocol> *daemon;

- (id)initWithDaemon:(id)a0;
- (void)sendEmergencyQuestionnaire:(id)a0;
- (void)daemonControllerDidDisconnect;
- (void)locationUpdateSent;
- (void)daemonConnectionLost;
- (void)dealloc;
- (id)init;
- (void)setUpConnectionToDaemaon;
- (void).cxx_destruct;

@end
