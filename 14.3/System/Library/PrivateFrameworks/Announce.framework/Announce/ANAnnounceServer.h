@class ANSystemNotificationObserver, ANAnnounceServiceListener, ANRapportEventStreamHandler, ANPlaybackSessionServiceListener, ANAnnounceReachabilityServiceListener;

@interface ANAnnounceServer : NSObject

@property (readonly, nonatomic) ANAnnounceServiceListener *announceServiceListener;
@property (readonly, nonatomic) ANPlaybackSessionServiceListener *playbackSessionServiceListener;
@property (readonly, nonatomic) ANAnnounceReachabilityServiceListener *announceReachabilityServiceListener;
@property (readonly, nonatomic) ANRapportEventStreamHandler *rapportEventStreamHandler;
@property (readonly, nonatomic) ANSystemNotificationObserver *systemNotificationObserver;

+ (id)sharedServer;

- (id)init;
- (void).cxx_destruct;
- (void)cleanForExit:(id /* block */)a0;

@end
