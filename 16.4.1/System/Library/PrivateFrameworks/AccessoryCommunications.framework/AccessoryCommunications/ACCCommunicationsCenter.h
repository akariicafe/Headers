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
- (void)endCallWithAction:(int)a0 callUUID:(id)a1;
- (void)initiateCallToVoicemail;
- (void)endAllCalls;
- (void)dealloc;
- (void)updateHoldStatus:(BOOL)a0 forCallWithUUID:(id)a1;
- (void)sendDTMF:(int)a0 forCallWithUUID:(id)a1;
- (void)connectToServer;
- (void)initiateCallToDestination:(id)a0 withService:(int)a1 addressBookID:(id)a2;
- (id)init;
- (void)initiateRedial;
- (void).cxx_destruct;
- (void)mergeCalls;
- (void)acceptCallWithAction:(int)a0 callUUID:(id)a1;
- (void)updateMuteStatus:(BOOL)a0;
- (void)commStatusDidChange:(id)a0;
- (void)favoritesListDidChange;
- (id)initWithCallStateDelegate:(id)a0 andCommunicationsDelegate:(id)a1 andCallControlsDelegate:(id)a2 andListUpdatesDelegate:(id)a3;
- (void)recentsListDidChange;
- (void)updateSubscriberList:(id)a0 withReply:(id /* block */)a1;
- (void)triggerCallStateUpdatesWithReply:(id /* block */)a0;
- (void)triggerCommunicationsUpdateWithReply:(id /* block */)a0;
- (void)triggerUpdateForListType:(int)a0 coalesce:(BOOL)a1 withReply:(id /* block */)a2;

@end
