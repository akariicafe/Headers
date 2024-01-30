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

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)onFrontmostApplicationChanged:(int)a0;
- (void).cxx_destruct;
- (id)initWithFilter:(id)a0;
- (void)clientRemoved:(id)a0;
- (void)beginObservingKeyboardAndMouseEvents;
- (void)clientAdded:(id)a0;
- (BOOL)locateFrontMostAppClientConnection;
- (void)onKeyboardEvent:(id)a0;
- (void)onMouseEvent:(id)a0;
- (void)pidsWithKeyboardAndMouseSupportDidChange;
- (void)setFrontMostClient:(id)a0;
- (void)stopObservingKeyboardAndMouseEvents;

@end
