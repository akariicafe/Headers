@class CADisplayLink;

@interface CLKUIDisplayLink : CLKUIRenderFrequencyLink {
    CADisplayLink *_displayLink;
}

- (void)invalidate;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void)updateCoordinator;
- (void).cxx_destruct;

@end
