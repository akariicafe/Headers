@class UIScreen, NSString, CADisplayLink, NSRunLoop;

@interface ICDisplayLink : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) long long preferredFramesPerSecond;
@property (weak, nonatomic) NSRunLoop *runLoop;
@property (retain, nonatomic) NSString *runLoopMode;
@property (weak, nonatomic) UIScreen *screen;

- (void)schedule;
- (void)displayLinkAction;
- (void)dealloc;
- (void)invalidate;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void).cxx_destruct;

@end
