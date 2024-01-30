@class AVExternalPlaybackMonitorInternal;

@interface AVExternalPlaybackMonitor : NSObject {
    AVExternalPlaybackMonitorInternal *_ivars;
}

@property (readonly, getter=isAirPlayVideoActive) BOOL airPlayVideoActive;
@property (readonly, getter=isAirPlayVideoPlaying) BOOL airPlayVideoPlaying;

+ (void)initialize;
+ (id)longFormVideoExternalPlaybackMonitor;

- (id)init;
- (void)dealloc;
- (id)initWithFigRoutingSessionManager:(struct OpaqueFigRoutingSessionManager { } *)a0;
- (id)description;

@end
