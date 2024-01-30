@class GCKeyboardEventObserver, NSString, _GCIPCRemoteProcess, GCFrontmostApplicationObserver, GCMouseEventObserver;
@protocol GCAppConnectionsFilter;

@interface GCKeyboardAndMouseEventObserver : NSObject <GCKeyboardEventObserverDelegate, GCMouseEventObserverDelegate, GCFrontmostApplicationObserverDelegate> {
    id<GCAppConnectionsFilter> _filter;
    GCKeyboardEventObserver *_keyboardEventObserver;
    GCMouseEventObserver *_mouseEventObserver;
    _GCIPCRemoteProcess *_frontMostClient;
    int _pid;
    GCFrontmostApplicationObserver *_frontmostApplicationObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)onKeyboardEvent:(id)a0;
- (void)clientRemoved:(id)a0;
- (void)onMouseEvent:(id)a0;
- (id)initWithFilter:(id)a0;
- (void)onFrontmostApplicationChanged:(int)a0;
- (void)clientAdded:(id)a0;

@end
