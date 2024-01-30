@class AVPlayerInterstitialEvent;

@interface AVInterstitialTimeRange : NSObject <NSCopying, NSSecureCoding> {
    BOOL _hidden;
    BOOL _collapsedInTimeLine;
    double _playingDuration;
    AVPlayerInterstitialEvent *_playerInterstitialEvent;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isActive, setter=_setActive:) BOOL active;
@property (nonatomic, setter=_setWatchCount:) unsigned long long _watchCount;
@property (nonatomic) double linearPlaybackRequirementDuration;
@property (nonatomic) long long requiredViewingPolicy;
@property (nonatomic, setter=_setPlayingDuration:) double playingDuration;
@property (readonly) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;

+ (id)interstitialTimeRangeWithPlayerInterstitialEvent:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isHidden;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (BOOL)isEqualToInterstitialTimeRange:(id)a0;
- (id)_initWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)_setCollapsedInTimeLine:(BOOL)a0;
- (void)_setDurationTimeInterval:(double)a0;
- (void)_setPlayerInterstitialEvent:(id)a0;
- (id)initWithHiddenTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (BOOL)isCollapsedInTimeLine;
- (BOOL)isSkipped;
- (id)playerInterstitialEvent;

@end
