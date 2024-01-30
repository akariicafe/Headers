@class CADisplayLink;

@interface AVDisplayLink : NSObject

@property (copy, nonatomic) id /* block */ linkFired;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (weak, nonatomic) id observer;
@property (nonatomic) double startTime;
@property (readonly, nonatomic) double runningTime;

- (void)startDisplayLinkUpdatesForObserver:(id)a0 framesPerSecond:(long long)a1 usingBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)invalidate;
- (void)linkFired:(id)a0;

@end
