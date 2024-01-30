@class NSMutableDictionary, CADisplayLink;

@interface _HandsDisplayLinkManager : NSObject {
    CADisplayLink *_displayLink;
    NSMutableDictionary *_handlers;
    unsigned long long _nextToken;
    BOOL _inForeground;
}

+ (id)sharedInstance;

- (void)_updateDisplayLink;
- (void)dealloc;
- (id)init;
- (void)_onDisplayLink:(id)a0;
- (void).cxx_destruct;
- (void)_backgrounded;
- (id)_nextToken;
- (void)_foregrounded;
- (id)startUpdatesWithHandler:(id /* block */)a0;
- (void)_invokeHandlers;
- (void)stopUpdatesForToken:(id)a0;

@end
