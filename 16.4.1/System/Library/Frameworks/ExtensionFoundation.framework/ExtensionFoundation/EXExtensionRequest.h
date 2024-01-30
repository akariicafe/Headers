@class NSUUID, NSXPCConnection, NSExtensionContext, NSArray, NSXPCListenerEndpoint, _EXExtensionInstanceIdentifier, NSString, RBSProcessIdentifier, _EXPersona;
@protocol PKPlugInPrivate;

@interface EXExtensionRequest : NSObject

@property (retain) NSUUID *pkUUID;
@property (retain) id assertion;
@property (retain) RBSProcessIdentifier *processIdentifier;
@property (retain) id<PKPlugInPrivate> plugIn;
@property (retain) NSXPCConnection *xpcConnection;
@property (weak) NSExtensionContext *context;
@property unsigned long long options;
@property (copy) NSArray *inputItems;
@property (retain) NSXPCListenerEndpoint *endpoint;
@property (retain) _EXExtensionInstanceIdentifier *instanceIdentifier;
@property (copy) NSString *sandboxProfileName;
@property (retain) _EXPersona *persona;

- (void)applyActiveWebPageAlternativeIfNeededForExtension:(id)a0;
- (void)dealloc;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
