@class NSSet, NSString, NSXPCConnection;
@protocol AccessoryNowPlayingClientProtocol, AccessoryNowPlayingXPCServerProtocol;

@interface AccessoryNowPlayingClient : NSObject <AccessoryNowPlayingXPCClientProtocol>

@property (nonatomic) BOOL shouldSendArtwork;
@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) id<AccessoryNowPlayingXPCServerProtocol> remoteObject;
@property (retain, nonatomic) NSSet *subscriberList;
@property (weak, nonatomic) id<AccessoryNowPlayingClientProtocol> delegate;
@property (readonly, nonatomic) BOOL shouldSendPlaybackQueueList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)requestPlaybackQueueListInfo:(id)a0 requestID:(id)a1 startIndex:(unsigned int)a2 upToCount:(unsigned int)a3 infoMask:(unsigned int)a4;
- (id)initWithDelegate:(id)a0;
- (void)cancelRequestPlaybackQueueListInfo:(id)a0 requestID:(id)a1;
- (void)connectToServer;
- (void)playbackQueueListInfoResponse:(id)a0 requestID:(id)a1 info:(id)a2;
- (void)updateSubscriberList:(id)a0 WithReply:(id /* block */)a1;
- (void)triggerMediaItemAttributesUpdateWithReply:(id /* block */)a0;
- (void)triggerMediaItemArtworkUpdateWithReply:(id /* block */)a0;
- (void)triggerPlaybackAttributesUpdateWithReply:(id /* block */)a0;
- (void)setPlaybackElapsedTime:(id)a0 withReply:(id /* block */)a1;
- (void)setPlaybackQueueIndex:(id)a0 withReply:(id /* block */)a1;
- (void)mediaItemAttributesDidChange:(id)a0;
- (void)mediaItemArtworkDidChange;
- (void)playbackAttributesDidChange:(id)a0;
- (void)playbackQueueListDidChange;

@end
