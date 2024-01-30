@class NSSet, NSMutableDictionary, NSXPCConnection, NSString;
@protocol ACCCommunicationsCenterListUpdatesDelegate, ACCCommunicationsCenterCommunicationsDelegate, ACCCommunicationsCenterCallControlsDelegate, ACCCommunicationsCenterCallStateDelegate, ACCCommunicationsXPCServerProtocol;

@interface ACCCommunicationsCenter : NSObject <ACCCommunicationsXPCClientProtocol>

@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) id<ACCCommunicationsXPCServerProtocol> remoteObject;
@property (retain, nonatomic) NSSet *subscriberList;
@property (retain) NSMutableDictionary *callStateCache;
@property (retain) NSMutableDictionary *cachedCommStatus;
@property (weak, nonatomic) id<ACCCommunicationsCenterCallStateDelegate> callStateDelegate;
@property (weak, nonatomic) id<ACCCommunicationsCenterCommunicationsDelegate> communicationsDelegate;
@property (weak, nonatomic) id<ACCCommunicationsCenterCallControlsDelegate> callControlsDelegate;
@property (weak, nonatomic) id<ACCCommunicationsCenterListUpdatesDelegate> listUpdatesDelegate;
@property (readonly, nonatomic) unsigned long long maxRecentsListEntries;
@property (readonly, nonatomic) unsigned long long maxFavoritesListEntries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)swapCalls;
- (void)callStateDidChange:(id)a0;
- (void)updateMuteStatus:(BOOL)a0;
- (void)initiateCallToVoicemail;
- (void)endCallWithAction:(int)a0 callUUID:(id)a1;
- (void)updateHoldStatus:(BOOL)a0 forCallWithUUID:(id)a1;
- (void)connectToServer;
- (void)sendDTMF:(int)a0 forCallWithUUID:(id)a1;
- (void)initiateCallToDestination:(id)a0 withService:(int)a1 addressBookID:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)endAllCalls;
- (void)mergeCalls;
- (void)dealloc;
- (void)initiateRedial;
- (void)acceptCallWithAction:(int)a0 callUUID:(id)a1;
- (id)initWithCallStateDelegate:(id)a0 andCommunicationsDelegate:(id)a1 andCallControlsDelegate:(id)a2 andListUpdatesDelegate:(id)a3;
- (void)commStatusDidChange:(id)a0;
- (void)recentsListDidChange;
- (void)favoritesListDidChange;
- (void)updateSubscriberList:(id)a0 withReply:(id /* block */)a1;
- (void)triggerCallStateUpdatesWithReply:(id /* block */)a0;
- (void)triggerCommunicationsUpdateWithReply:(id /* block */)a0;
- (void)triggerUpdateForListType:(int)a0 coalesce:(BOOL)a1 withReply:(id /* block */)a2;

@end
