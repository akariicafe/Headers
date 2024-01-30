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

- (id)localizedName;
- (struct { unsigned int x0[8]; })auditToken;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)bundleURL;
- (BOOL)isPermittedToUseBluetoothAccessories;
- (BOOL)isConnected;
- (BOOL)isPermittedToUsePrivateAPI;
- (BOOL)isPermittedToUsePublicAPI;
- (id)bundleIdentifier;
- (void)dealloc;
- (int)processIdentifier;
- (id)vendorProtocolDelegate;

@end
