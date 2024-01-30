@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, ANRemotePlaybackSessionDelegate;

@interface ANRemotePlaybackSession : NSObject <ANRemotePlaybackSessionServiceClientInterface>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) id /* block */ handler;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (weak, nonatomic) id<ANRemotePlaybackSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPlaybackStoppedForAnnouncement:(id)a0;
- (BOOL)endSession;
- (void)setPlaybackStartedForAnnouncement:(id)a0;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)lastPlayedAnnouncementInfoWithCompletion:(id /* block */)a0;
- (void)didReceiveAnnouncement:(id)a0 forGroupID:(id)a1;
- (BOOL)startSessionForGroupID:(id)a0 announcementsHandler:(id /* block */)a1;
- (void)_callHandler:(id)a0;
- (void)didUpdateAnnouncements:(id)a0 forGroupID:(id)a1;
- (void)setPlaybackEndedForAnnouncement:(id)a0;

@end
