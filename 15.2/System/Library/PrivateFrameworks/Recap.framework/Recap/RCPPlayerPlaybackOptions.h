@interface RCPPlayerPlaybackOptions : NSObject

@property (nonatomic) double playbackSpeedFactor;
@property (nonatomic) double minDelayBetweenSends;
@property (nonatomic) double firstEventFrameDelay;
@property (nonatomic) BOOL useHIDEventTimestampsForDelivery;
@property (nonatomic) BOOL ignoreSenderProperties;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;

- (unsigned long long)timestampForEventReplay:(id)a0;
- (id)init;

@end
