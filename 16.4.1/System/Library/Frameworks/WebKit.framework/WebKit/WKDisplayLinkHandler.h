@class CADisplayLink;

@interface WKDisplayLinkHandler : NSObject {
    void *_drawingAreaProxy;
    CADisplayLink *_displayLink;
}

- (void)schedule;
- (void)setPreferredFramesPerSecond:(long long)a0;
- (void)pause;
- (void)displayLinkFired:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (id)initWithDrawingAreaProxy:(void *)a0;

@end
