@class NSUUID, NSDictionary, NSXPCConnection, NSString;
@protocol ANLocalPlaybackSessionDelegate;

@interface ANLocalPlaybackSession : NSObject <ANLocalPlaybackSessionServiceInterfaceDelegate>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSUUID *endpointIdentifier;
@property (readonly, nonatomic) NSDictionary *lastPlayedAnnouncementInfo;
@property (readonly, nonatomic) unsigned long long playbackState;
@property (weak, nonatomic) id<ANLocalPlaybackSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringForPlaybackState:(unsigned long long)a0;

- (void)_start;
- (void)playAnnouncementsWithOptions:(unsigned long long)a0 startingAt:(id)a1 completionHandler:(id /* block */)a2;
- (void)playAnnouncementsWithIDs:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)announcementsStateUpdate:(unsigned long long)a0;
- (void)playAnnouncementsWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)announcementsWillStartPlaying:(unsigned long long)a0;
- (void)dealloc;
- (void)sendPlaybackCommand:(id)a0 completionHandler:(id /* block */)a1;
- (void)nextAnnouncementWithCompletionHandler:(id /* block */)a0;
- (void)playAnnouncements;
- (void)previousAnnouncementWithCompletionHandler:(id /* block */)a0;
- (void)stopPlayingAnnouncements;
- (id)init;
- (id)initWithEndpointIdentifier:(id)a0;
- (void)stopPlayingAnnouncementsWithCompletionHandler:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)lastPlayedAnnouncementInfoWithCompletion:(id /* block */)a0;
- (void)didReceiveAnnouncement:(id)a0 forGroupID:(id)a1;

@end
