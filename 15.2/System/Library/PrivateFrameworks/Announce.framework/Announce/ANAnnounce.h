@class NSArray, NSUUID, NSXPCConnection;
@protocol ANAnnounceDelegate;

@interface ANAnnounce : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSArray *unplayedAnnouncements;
@property (readonly, nonatomic) NSArray *receivedAnnouncements;
@property (readonly, nonatomic) NSUUID *endpointIdentifier;
@property (weak, nonatomic) id<ANAnnounceDelegate> delegate;

- (BOOL)isLocalDeviceInRoom:(id)a0;
- (id)initWithEndpointIdentifier:(id)a0;
- (BOOL)isEndpointWithUUID:(id)a0 inRoomWithName:(id)a1;
- (id)homeNamesForContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)prewarmWithHandler:(id /* block */)a0;
- (void)sendAnnouncement:(id)a0 toRoomsWithIDs:(id)a1 andZonesWithIDs:(id)a2 inHomeWithID:(id)a3 completion:(id /* block */)a4;
- (void)sendAnnouncement:(id)a0 toHomeWithID:(id)a1 completion:(id /* block */)a2;
- (void)broadcastReply:(id)a0 forAnnouncementID:(id)a1 completion:(id /* block */)a2;
- (void)sendRequest:(id)a0 completion:(id /* block */)a1;
- (void)localParticipant:(id /* block */)a0;
- (void)mockAnnouncement:(id)a0 forHomeWithName:(id)a1 playbackDeadline:(id)a2 completion:(id /* block */)a3;
- (void)lastPlayedAnnouncementInfo:(id /* block */)a0;
- (void)getScanningDeviceCandidates:(id /* block */)a0;
- (void)sendAnnouncement:(id)a0 toRoomsWithNames:(id)a1 andZonesWithNames:(id)a2 inHomeWithName:(id)a3 completion:(id /* block */)a4;
- (void)_sendRequestLegacy:(id)a0 completion:(id /* block */)a1;
- (void)sendAnnouncement:(id)a0 toHomeWithName:(id)a1 completion:(id /* block */)a2;
- (void)sendReply:(id)a0 forAnnouncement:(id)a1 completion:(id /* block */)a2;
- (void)broadcastReply:(id)a0 forAnnouncement:(id)a1 completion:(id /* block */)a2;
- (void)broadcastReply:(id)a0 completion:(id /* block */)a1;
- (void)receivedAnnouncementIDs:(id /* block */)a0;
- (id)receivedAnnouncementIDs;
- (void)announcementForID:(id)a0 reply:(id /* block */)a1;
- (id)announcementForID:(id)a0;
- (void)getReceivedAnnouncementsWithCompletionHandler:(id /* block */)a0;
- (id)contextFromAnnouncement:(id)a0;
- (BOOL)isAnnounceEnabledForAnyAccessoryInHome:(id)a0;
- (BOOL)isAnnounceEnabledForAnyAccessoryOrUserInHome:(id)a0;
- (void)sendAnnouncement:(id)a0 toRoomsWithNames:(id)a1 inHomeWithName:(id)a2 completion:(id /* block */)a3;
- (void)sendAnnouncement:(id)a0 toZonesWithNames:(id)a1 inHomeWithName:(id)a2 completion:(id /* block */)a3;
- (void)sendAnnouncement:(id)a0 toRoomsWithIDs:(id)a1 inHomeWithID:(id)a2 completion:(id /* block */)a3;
- (void)sendAnnouncement:(id)a0 toZonesWithIDs:(id)a1 inHomeWithID:(id)a2 completion:(id /* block */)a3;

@end
