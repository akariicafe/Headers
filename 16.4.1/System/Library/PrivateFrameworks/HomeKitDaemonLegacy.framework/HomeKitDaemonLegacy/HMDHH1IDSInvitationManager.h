@class NSString, HMDHomeManager, IDSInvitationManager;

@interface HMDHH1IDSInvitationManager : NSObject <IDSInvitationManagerDelegate>

@property (readonly, weak) HMDHomeManager *homeManager;
@property (retain, nonatomic) IDSInvitationManager *idsInvitationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)manager:(id)a0 senderDidCancelInvitation:(id)a1;
- (void)manager:(id)a0 receiverDidAcceptInvitation:(id)a1;
- (void)manager:(id)a0 incomingInvitation:(id)a1;
- (void)manager:(id)a0 receiverDidDeclineInvitation:(id)a1;
- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0 workQueue:(id)a1;

@end
