@class ClientConnection;

@interface CADOperationGroup : NSObject

@property (readonly, nonatomic) ClientConnection *conn;

+ (BOOL)requiresEventAccess;
+ (id)whitelistedBundles;

- (id)initWithClientConnection:(id)a0;
- (BOOL)accessGranted;
- (void).cxx_destruct;

@end
