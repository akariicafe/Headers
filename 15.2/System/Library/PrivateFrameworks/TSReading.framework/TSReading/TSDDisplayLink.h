@class CADisplayLink;

@interface TSDDisplayLink : NSObject {
    CADisplayLink *_displayLink;
}

@property (nonatomic) double startTime;
@property (nonatomic) double lastTime;
@property (copy, nonatomic) id /* block */ tickBlock;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void)teardown;
- (void)start;
- (void)dealloc;
- (void)p_handleDisplayLink:(id)a0;

@end
