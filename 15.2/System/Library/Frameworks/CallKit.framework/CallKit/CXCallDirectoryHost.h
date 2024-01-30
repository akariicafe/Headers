@class NSString, NSObject;
@protocol OS_dispatch_queue, CXCallDirectoryHostDelegate;

@interface CXCallDirectoryHost : NSObject <CXCallDirectoryManagerDefaultHostProtocol, CXCallDirectoryManagerMaintenanceHostProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CXCallDirectoryHostDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performDelegateCallback:(id /* block */)a0;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (oneway void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)a0 reply:(id /* block */)a1;
- (oneway void)getEnabledStatusForExtensionWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (oneway void)getExtensionsWithReply:(id /* block */)a0;
- (oneway void)compactStoreWithReply:(id /* block */)a0;
- (oneway void)setPrioritizedExtensionIdentifiers:(id)a0 reply:(id /* block */)a1;
- (oneway void)setEnabled:(BOOL)a0 forExtensionWithIdentifier:(id)a1 reply:(id /* block */)a2;
- (oneway void)synchronizeExtensionsWithReply:(id /* block */)a0;
- (void)prepareStoreIfNecessary;
- (void).cxx_destruct;
- (void)_nsExtensionWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (BOOL)_connectionContainsCallDirectoryHostEntitlementCapability:(id)a0;
- (oneway void)reloadExtensionWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (oneway void)launchCallDirectorySettingsWithReply:(id /* block */)a0;

@end
