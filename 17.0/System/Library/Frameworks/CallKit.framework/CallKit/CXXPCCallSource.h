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

- (id)init;
- (void)dealloc;
- (BOOL)isConnected;
- (id)vendorProtocolDelegate;
- (id)initWithConnection:(id)a0;
- (struct { unsigned int x0[8]; })auditToken;
- (id)bundleIdentifier;
- (id)localizedName;
- (void).cxx_destruct;
- (BOOL)isPermittedToUsePrivateAPI;
- (id)bundleURL;
- (int)processIdentifier;
- (BOOL)isPermittedToUseBluetoothAccessories;
- (BOOL)isPermittedToUsePublicAPI;

@end
