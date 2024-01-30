@class NSXPCListenerEndpoint, NSArray, NSUUID, NSXPCConnection, NSExtensionContext;

@interface EXExtensionRequest : NSObject

@property unsigned long long options;
@property (copy) NSArray *inputItems;
@property (retain) NSXPCListenerEndpoint *endpoint;
@property (retain) NSUUID *pkUUID;
@property (retain) id assertion;
@property (retain) NSXPCConnection *xpcConnection;
@property (weak) NSExtensionContext *context;

- (id)description;
- (void)applyActiveWebPageAlternativeIfNeededForExtension:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
