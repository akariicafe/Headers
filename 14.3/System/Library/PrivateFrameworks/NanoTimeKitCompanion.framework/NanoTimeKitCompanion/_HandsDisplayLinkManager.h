@class NSMutableDictionary, CADisplayLink;

@interface _HandsDisplayLinkManager : NSObject {
    CADisplayLink *_displayLink;
    NSMutableDictionary *_handlers;
    unsigned long long _nextToken;
    BOOL _inForeground;
}

+ (id)sharedInstance;

- (void)_onDisplayLink:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateDisplayLink;
- (id)startUpdatesWithHandler:(id /* block */)a0;
- (void)_foregrounded;
- (id)_nextToken;
- (void)_backgrounded;
- (void)stopUpdatesForToken:(id)a0;
- (void)_invokeHandlers;

@end
