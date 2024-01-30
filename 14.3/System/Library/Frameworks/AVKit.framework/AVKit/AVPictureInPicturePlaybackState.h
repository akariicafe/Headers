@interface AVPictureInPicturePlaybackState : NSObject <NSCopying>

@property (readonly, nonatomic) double initializationTimestamp;
@property (readonly, nonatomic) double initializedElapsedTime;
@property (readonly, nonatomic) double timelineRate;
@property (readonly, nonatomic) double timelineDuration;
@property (readonly, nonatomic) double currentElapsedTime;
@property (readonly, nonatomic, getter=isPaused) BOOL paused;

- (id)initWithElapsedTime:(double)a0 timelineDuration:(double)a1 timelineRate:(double)a2 paused:(BOOL)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
