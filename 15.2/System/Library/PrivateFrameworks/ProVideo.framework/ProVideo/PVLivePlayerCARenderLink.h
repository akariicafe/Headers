@class CADisplayLink;

@interface PVLivePlayerCARenderLink : PVLivePlayerRenderLink {
    long long _prefferedCADisplayFPS;
    CADisplayLink *_displayLink;
}

@property (nonatomic) long long prefferedCADisplayFPS;

- (void)teardown;
- (void)displayLinkFired:(id)a0;
- (void).cxx_destruct;
- (void)rebuild;
- (id)initWithCADisplayLinkFPS:(long long)a0;

@end
