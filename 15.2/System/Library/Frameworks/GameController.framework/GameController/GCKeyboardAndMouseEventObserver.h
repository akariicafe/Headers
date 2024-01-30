@class GCKeyboardEventObserver, NSString, _GCIPCRemoteProcess, _GCAppClientConnection, GCFrontmostApplicationObserver, GCMouseEventObserver;
@protocol GCAppConnectionsFilter;

@interface GCKeyboardAndMouseEventObserver : NSObject <GCKeyboardEventObserverDelegate, GCMouseEventObserverDelegate, GCFrontmostApplicationObserverDelegate> {
    id<GCAppConnectionsFilter> _filter;
    GCKeyboardEventObserver *_keyboardEventObserver;
    GCMouseEventObserver *_mouseEventObserver;
    _GCIPCRemoteProcess *_frontMostClient;
    _GCAppClientConnection *_frontMostAppClientConnection;
    int _pid;
    BOOL _observingEvents;
    GCFrontmostApplicationObserver *_frontmostApplicationObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onMouseEvent:(id)a0;
- (id)initWithFilter:(id)a0;
- (void)setFrontMostClient:(id)a0;
- (void)pidsWithKeyboardAndMouseSupportDidChange;
- (void).cxx_destruct;
- (void)clientAdded:(id)a0;
- (void)onFrontmostApplicationChanged:(int)a0;
- (void)onKeyboardEvent:(id)a0;
- (BOOL)locateFrontMostAppClientConnection;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stopObservingKeyboardAndMouseEvents;
- (void)clientRemoved:(id)a0;
- (void)dealloc;
- (void)beginObservingKeyboardAndMouseEvents;

@end
