@class CADisplay, CADisplayLink, CAWindowServerDisplay, NSObject;
@protocol OS_dispatch_semaphore;

@interface CAWindowServerRamper : NSObject {
    NSObject<OS_dispatch_semaphore> *_sema;
}

@property (retain) CAWindowServerDisplay *display;
@property (retain) CADisplay *cadisplay;
@property (retain) CADisplayLink *link;
@property double duration;
@property int id;
@property double beginTime;

- (void)runRamp;
- (id)initWithDisplay:(id)a0;
- (void)rampCallback:(id)a0;

@end
