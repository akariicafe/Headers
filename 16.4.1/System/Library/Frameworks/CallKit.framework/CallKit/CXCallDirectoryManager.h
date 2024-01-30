@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CXCallDirectoryManager : NSObject

@property (class, readonly) CXCallDirectoryManager *sharedInstance;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *defaultConnection;
@property (retain, nonatomic) NSXPCConnection *maintenanceConnection;

- (void)compactStoreWithCompletionHandler:(id /* block */)a0;
- (void)synchronizeExtensionsWithCompletionHandler:(id /* block */)a0;
- (void)getExtensionsWithCompletionHandler:(id /* block */)a0;
- (void)getEnabledStatusForExtensionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)reloadExtensionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)setEnabled:(BOOL)a0 forExtensionWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)defaultConnectionRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)maintenanceConnectionRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)firstIdentificationEntryForEnabledExtensionWithPhoneNumber:(id)a0 completionHandler:(id /* block */)a1;
- (void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)a0 completionHandler:(id /* block */)a1;
- (void)openSettingsWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (void)setPrioritizedExtensionIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
