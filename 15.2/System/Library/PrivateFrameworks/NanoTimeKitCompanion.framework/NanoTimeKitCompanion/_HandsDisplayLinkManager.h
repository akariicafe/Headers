@class NSMutableDictionary, CADisplayLink;

@interface _HandsDisplayLinkManager : NSObject {
    CADisplayLink *_displayLink;
    NSMutableDictionary *_handlers;
    unsigned long long _nextToken;
    BOOL _inForeground;
}

+ (id)sharedInstance;

- (void)_updateDisplayLink;
- (void)_onDisplayLink:(id)a0;
- (void)_foregrounded;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)startUpdatesWithHandler:(id /* block */)a0;
- (void)_backgrounded;
- (id)_nextToken;
- (void)stopUpdatesForToken:(id)a0;
- (void)_invokeHandlers;

@end
