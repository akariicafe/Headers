@class AVExternalPlaybackMonitorInternal;

@interface AVExternalPlaybackMonitor : NSObject {
    AVExternalPlaybackMonitorInternal *_ivars;
}

@property (readonly, getter=isAirPlayVideoActive) BOOL airPlayVideoActive;
@property (readonly, getter=isAirPlayVideoPlaying) BOOL airPlayVideoPlaying;

+ (void)initialize;
+ (id)longFormVideoExternalPlaybackMonitor;

- (id)initWithFigRoutingSessionManager:(struct OpaqueFigRoutingSessionManager { } *)a0;
- (id)description;
- (id)init;
- (void)dealloc;

@end
