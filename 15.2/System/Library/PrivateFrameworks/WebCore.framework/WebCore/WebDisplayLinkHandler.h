@class CADisplayLink;

@interface WebDisplayLinkHandler : NSObject {
    void *m_monitor;
    CADisplayLink *m_displayLink;
}

- (void)handleDisplayLink:(id)a0;
- (void)setPaused:(BOOL)a0;
- (void)invalidate;
- (id)initWithMonitor:(void *)a0;
- (void)dealloc;

@end
