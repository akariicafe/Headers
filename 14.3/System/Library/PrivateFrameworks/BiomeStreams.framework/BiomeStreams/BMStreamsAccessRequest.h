@class NSString, NSXPCConnection;

@interface BMStreamsAccessRequest : NSObject {
    struct { unsigned int val[8]; } _token;
    NSString *_identifier;
    NSXPCConnection *_weakConnection;
}

- (void).cxx_destruct;
- (void)requestReadAccessTokenWithStream:(long long)a0 reply:(id /* block */)a1;
- (void)requestWriteAccessTokenWithStream:(long long)a0 reply:(id /* block */)a1;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 identifier:(id)a1 connection:(id)a2;
- (BOOL)_hasDirectoryForStream:(long long)a0;
- (void)_createPublicStreamDirectories;
- (BOOL)hasReadEntitlementForStream:(long long)a0;
- (BOOL)hasWriteEntitlementForStream:(long long)a0;

@end
