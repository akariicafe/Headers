@interface MPMusicPlayerControllerNowPlayingTimeSnapshot : NSObject <NSSecureCoding> {
    double _elapsedTime;
    double _duration;
    double _timestamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isLive) BOOL live;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) float rate;
@property (readonly, nonatomic) long long state;

+ (id)snapshotWithElapsedTime:(double)a0 duration:(double)a1 rate:(float)a2 atTimestamp:(double)a3 state:(long long)a4;
+ (id)liveSnapshotWithRate:(float)a0 state:(long long)a1;

- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
