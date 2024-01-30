@class NSString, NSXPCConnection, NSURL, NSSet;

@interface CXXPCVoicemailSource : CXVoicemailSource

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSSet *capabilities;

- (id)identifier;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isConnected;
- (BOOL)isPermittedToUsePrivateAPI;
- (void)dealloc;
- (int)processIdentifier;
- (id)vendorProtocolDelegate;

@end
