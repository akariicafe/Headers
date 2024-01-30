@class NSXPCListener;

@interface BMStreamsAccessClient : NSObject {
    NSXPCListener *_listener;
    long long _readExtensionHandle;
    long long _writeExtensionHandle;
}

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)requestWriteAccessTokenForStream:(long long)a0;
- (BOOL)requestReadAccessTokenForStream:(long long)a0;
- (BOOL)hasAccessForStream:(long long)a0 permission:(const char *)a1;
- (BOOL)hasReadAccessForStream:(long long)a0;
- (BOOL)hasWriteAccessForStream:(long long)a0;

@end
