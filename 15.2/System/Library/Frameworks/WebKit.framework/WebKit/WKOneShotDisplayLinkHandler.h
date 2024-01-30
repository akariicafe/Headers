@class CADisplayLink;

@interface WKOneShotDisplayLinkHandler : NSObject {
    void *_drawingAreaProxy;
    CADisplayLink *_displayLink;
}

- (void)displayLinkFired:(id)a0;
- (id)initWithDrawingAreaProxy:(void *)a0;
- (void)schedule;
- (void)pause;
- (void)invalidate;
- (void)dealloc;
- (void)setPreferredFramesPerSecond:(long long)a0;

@end
