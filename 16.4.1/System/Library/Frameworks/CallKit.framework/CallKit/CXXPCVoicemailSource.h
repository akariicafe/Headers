@class NSString, NSXPCConnection, NSURL, NSSet;

@interface CXXPCVoicemailSource : CXVoicemailSource

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSSet *capabilities;

- (BOOL)isConnected;
- (int)processIdentifier;
- (id)identifier;
- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (id)init;
- (id)vendorProtocolDelegate;
- (void).cxx_destruct;
- (BOOL)isPermittedToUsePrivateAPI;

@end
