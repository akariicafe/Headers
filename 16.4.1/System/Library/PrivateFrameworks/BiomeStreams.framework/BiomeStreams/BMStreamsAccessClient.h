@class BMStreamsAccessAssertionCache, NSMutableDictionary, BMStreamsAccessTracker;

@interface BMStreamsAccessClient : NSObject {
    NSMutableDictionary *_accessAssertions;
    BMStreamsAccessAssertionCache *_accessAssertionCache;
    BMStreamsAccessTracker *_accessTracker;
}

+ (BOOL)checkCurrentProcessEntitlementsForWriteAccessToStreamIdentifier:(id)a0;

- (id)_newConnectionForDomain:(unsigned long long)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_requestAccessToFlexibleStorage;
- (BOOL)_currentProcessIsSandboxed;
- (BOOL)_requestAccess:(unsigned long long)a0 toStreamType:(unsigned long long)a1 streamIdentifier:(id)a2;
- (id)initWithSandboxExtensionCache:(id)a0 accessTracker:(id)a1;
- (void)invalidateConnection:(id)a0;
- (BOOL)requestAccessToFlexibleStorage;
- (BOOL)requestReadAccessTokenForStreamIdentifier:(id)a0 streamType:(unsigned long long)a1;
- (BOOL)requestReadWriteAccessTokenForStreamIdentifier:(id)a0 streamType:(unsigned long long)a1;

@end
