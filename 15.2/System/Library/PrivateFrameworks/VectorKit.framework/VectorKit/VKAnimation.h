@class NSString;
@protocol VKAnimationRunner;

@interface VKAnimation : NSObject {
    id<VKAnimationRunner> _runner;
}

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) BOOL running;
@property (nonatomic) BOOL runsForever;
@property (nonatomic) float frequency;
@property (readonly, nonatomic) BOOL hasFrequency;
@property (nonatomic) double duration;
@property (readonly, nonatomic) BOOL timed;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) NSString *name;

- (void)stopAnimation:(BOOL)a0;
- (void)onTimerFired:(double)a0;
- (id)initWithPriority:(long long)a0;
- (id)description;
- (id)initWithPriority:(long long)a0 name:(id)a1;
- (id)initWithName:(id)a0;
- (void)pause;
- (void)resume;
- (void)dealloc;
- (void)startWithRunner:(id)a0;
- (void)transferToRunner:(id)a0;
- (void)stop;

@end
