@class NSArray, NSXPCConnection;

@interface FOAuthorizationCenter : NSObject

@property (class, readonly) FOAuthorizationCenter *sharedCenter;

@property (readonly) NSXPCConnection *xpcConnection;
@property (readonly) NSArray *authorizationRecords;

- (id)initWithXPCConnection:(id)a0;
- (void)resetAuthorizationForRecordIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestAuthorizationForRecordIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)revokeAuthorizationForRecordIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)revokeAuthorizationForDeletionForRecordIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
