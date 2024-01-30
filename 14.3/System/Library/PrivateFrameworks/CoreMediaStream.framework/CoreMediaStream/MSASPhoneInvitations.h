@class MSASAlbum, NSMutableDictionary, NSString, MSASStateMachine, IDSService;

@interface MSASPhoneInvitations : NSObject <IDSServiceDelegate>

@property (retain, nonatomic) MSASStateMachine *stateMachine;
@property (retain, nonatomic) MSASAlbum *album;
@property (retain, nonatomic) IDSService *idsService;
@property (retain, nonatomic) NSMutableDictionary *sendMessageIdentifierToPhone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void).cxx_destruct;
- (void)addPendingPhoneInvitations:(id)a0 toOwnedAlbum:(id)a1 inStateMachin:(id)a2;
- (void)removeSharingRelationships:(id)a0 forAlbum:(id)a1;

@end
