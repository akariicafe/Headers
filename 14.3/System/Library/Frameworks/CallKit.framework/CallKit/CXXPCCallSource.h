@class NSString, NSXPCConnection, NSURL, NSSet;

@interface CXXPCCallSource : CXCallSource {
    NSString *_localizedName;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSSet *capabilities;
@property (nonatomic) BOOL hasVoIPBackgroundMode;

- (BOOL)isPermittedToUsePublicAPI;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)localizedName;
- (id)initWithConnection:(id)a0;
- (int)processIdentifier;
- (BOOL)isConnected;
- (struct { unsigned int x0[8]; })auditToken;
- (BOOL)isPermittedToUsePrivateAPI;
- (id)vendorProtocolDelegate;
- (BOOL)isPermittedToUseBluetoothAccessories;
- (id)identifier;

@end
