@class NSSet, NSString, NSXPCConnection, NSURL;

@interface CXXPCCallSource : CXCallSource {
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_localizedName;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (readonly, copy, nonatomic) NSSet *capabilities;
@property (readonly, nonatomic) BOOL hasVoIPBackgroundMode;

- (id)bundleURL;
- (BOOL)isPermittedToUsePublicAPI;
- (BOOL)isConnected;
- (BOOL)isPermittedToUseBluetoothAccessories;
- (id)localizedName;
- (int)processIdentifier;
- (struct { unsigned int x0[8]; })auditToken;
- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (id)init;
- (id)bundleIdentifier;
- (id)vendorProtocolDelegate;
- (void).cxx_destruct;
- (BOOL)isPermittedToUsePrivateAPI;

@end
