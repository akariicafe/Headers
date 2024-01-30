@class BMStreamsAccessAssertionCache, NSMutableDictionary, NSXPCListenerEndpoint, BMStreamsAccessTracker;

@interface BMStreamsAccessClient : NSObject {
    NSMutableDictionary *_accessAssertions;
    BMStreamsAccessAssertionCache *_accessAssertionCache;
    BMStreamsAccessTracker *_accessTracker;
    NSXPCListenerEndpoint *_listenerEndpoint;
}

- (BOOL)_currentProcessIsSandboxed;
- (BOOL)_requestAccess:(unsigned long long)a0 toStreamType:(unsigned long long)a1 streamIdentifier:(id)a2;
- (BOOL)requestReadAccessTokenForStreamIdentifier:(id)a0 streamType:(unsigned long long)a1;
- (void)invalidateConnection:(id)a0;
- (id)initWithSandboxExtensionCache:(id)a0 accessTracker:(id)a1 listenerEndpoint:(id)a2;
- (BOOL)requestReadWriteAccessTokenForStreamIdentifier:(id)a0 streamType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)requestDSLWriteAccess;
- (id)newConnection;
- (void)dealloc;

@end
