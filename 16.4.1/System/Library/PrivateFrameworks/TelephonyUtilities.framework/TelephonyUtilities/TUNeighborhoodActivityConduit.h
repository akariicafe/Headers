@class NSString, TUNeighborhoodActivityConduitXPCClient, NSSet, NSDictionary, TUConversationManager, NSMutableSet, NSMapTable, TUNearbyDeviceHandle;
@protocol TUNeighborhoodActivityConduitApprovalDelegate;

@interface TUNeighborhoodActivityConduit : NSObject <TUNeighborhoodActivityConduitXPCClientDelegate>

@property (retain, nonatomic) NSMapTable *delegates;
@property (readonly, nonatomic) NSMutableSet *nearbyTVs;
@property (retain, nonatomic) TUNearbyDeviceHandle *activeSplitSessionTV;
@property (readonly, nonatomic) TUNeighborhoodActivityConduitXPCClient *xpcClient;
@property (readonly, nonatomic) TUConversationManager *conversationManager;
@property (nonatomic) unsigned long long stateHandle;
@property (weak, nonatomic) id<TUNeighborhoodActivityConduitApprovalDelegate> approvalDelegate;
@property (readonly, nonatomic) NSDictionary *nearbyTVDevices;
@property (readonly, nonatomic) NSSet *nearbyTVDeviceHandles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tvDeviceAppeared:(id)a0;
- (BOOL)nearbyTVDevice:(id)a0 isCapableOfHandoffForConversation:(id)a1;
- (void)_requestInitialState;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)_grouped:(id)a0 forEachDelegate:(id /* block */)a1;
- (id)_findConversationForUUID:(id)a0;
- (void)cancelSplitSessionApproval;
- (void)tvDeviceDisappeared:(id)a0;
- (id)initWithConversationManager:(id)a0;
- (void)_forEachDelegate:(id /* block */)a0;
- (void)inviteTVDevice:(id)a0 toConversation:(id)a1 completion:(id /* block */)a2;
- (void)disconnectTVDevice:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)connectionEstablishedForClient:(id)a0;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (id)_osStateDictionary;
- (void).cxx_destruct;
- (void)splitSessionStarted:(id)a0;
- (void)approveSplitSessionForConversation:(id)a0 device:(id)a1 pullContext:(long long)a2 completion:(id /* block */)a3;
- (void)splitSessionEnded:(id)a0;

@end
