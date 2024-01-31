@class NSString, NSXPCConnection, NSURL, NSSet;

@interface CXXPCVoicemailSource : CXVoicemailSource

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSSet *capabilities;

- (id)init;
- (void)dealloc;
- (BOOL)isConnected;
- (id)vendorProtocolDelegate;
- (id)initWithConnection:(id)a0;
- (id)identifier;
- (void).cxx_destruct;
- (BOOL)isPermittedToUsePrivateAPI;
- (int)processIdentifier;

@end
