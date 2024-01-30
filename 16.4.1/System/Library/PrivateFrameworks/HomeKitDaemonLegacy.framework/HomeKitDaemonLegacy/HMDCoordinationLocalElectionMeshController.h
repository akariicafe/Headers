@class NSString, NSArray;
@protocol HMDLocalElectionMeshControllerDelegate, HMDLocalElectionMeshNode;

@interface HMDCoordinationLocalElectionMeshController : COMeshController <HMDCoordinationAddOnImplDelegate, HMFLogging, HMDLocalElectionMeshController>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HMDLocalElectionMeshControllerDelegate> delegate;
@property (readonly) BOOL isLeader;
@property (readonly) BOOL isProcessing;
@property (readonly) NSArray *meshNodes;
@property (readonly) id<HMDLocalElectionMeshNode> leaderNode;

+ (id)logCategory;

- (id)logIdentifier;
- (void)stop;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)_setupMessageRegistrations;
- (id)debugDescriptionForControllerType;
- (id)debugDescriptionForMeshState;
- (void)meshControllerDidElectLeader;
- (void)meshControllerDidStartElection;
- (void)meshControllerDidUpdatesNodes;
- (id)meshNodeFor:(id)a0;
- (void)sendPingCommandToLeaderWithCompletion:(id /* block */)a0;
- (void)sendPingNotificationToFollowersWithPrimaryResident:(id)a0;
- (void)sendPingRequestToNode:(id)a0 withCompletion:(id /* block */)a1;
- (void)startMeshWithName:(id)a0;

@end
