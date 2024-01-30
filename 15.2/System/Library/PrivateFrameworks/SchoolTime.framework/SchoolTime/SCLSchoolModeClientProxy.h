@class NSUUID, NSString, NSXPCConnection, SCLSchoolModeCoordinator;
@protocol SCLSchoolModeClientProxyDelegate;

@interface SCLSchoolModeClientProxy : NSObject <SCLSchoolModeXPCServer>

@property (retain) NSUUID *pairingID;
@property (copy) NSString *identifier;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (weak) SCLSchoolModeCoordinator *coordinator;
@property (weak, nonatomic) id<SCLSchoolModeClientProxyDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)dumpState;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)remoteClient;
- (oneway void)connectWithPairingID:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (oneway void)applySchedule:(id)a0 completion:(id /* block */)a1;
- (oneway void)setActive:(BOOL)a0 completion:(id /* block */)a1;
- (oneway void)fetchRecentUnlockHistoryItemsWithCompletion:(id /* block */)a0;
- (oneway void)addUnlockHistoryItem:(id)a0 completion:(id /* block */)a1;
- (oneway void)deleteHistoryWithCompletion:(id /* block */)a0;
- (oneway void)noteSignificantUserInteraction;
- (oneway void)triggerRemoteSync;
- (void)didUpdateScheduleSettings:(id)a0 notify:(BOOL)a1;
- (void)unlockHistoryDidChange;
- (void)didUpdateState:(id)a0 fromState:(id)a1;
- (id)serverSettings;
- (BOOL)validateBooleanEntitlement:(id)a0 error:(id *)a1;
- (BOOL)validatePairing:(id *)a0;
- (void)sendServerSettings:(id)a0;

@end
