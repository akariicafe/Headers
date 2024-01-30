@class PXUpdater, NSString;

@interface PXStoryAnimation : PXObservable <PXStoryMutableAnimation>

@property (readonly, nonatomic) PXUpdater *updater;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastElapsedTime;
@property (nonatomic) double velocity;
@property (nonatomic) BOOL isStopped;
@property (readonly, nonatomic) BOOL canBePaused;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } elapsedTime;
@property (nonatomic) BOOL isPaused;
@property (nonatomic) double pauseDeceleration;
@property (nonatomic) double pausedVelocity;
@property (nonatomic) double resumeAcceleration;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) NSString *shortDescription;

- (id)initWithIdentifier:(id)a0;
- (void)didPerformChanges;
- (void)performChanges:(id /* block */)a0;
- (void)setTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)description;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (id)init;
- (void)_updateTime;
- (void)stop;
- (void)timeDidChange;
- (void)wasStopped;
- (void)_invalidateTime;

@end
