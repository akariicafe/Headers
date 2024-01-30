@class NSString, BAAppStoreProgressConfiguration, NSXPCConnection;

@interface BAAgentSystemProxy : NSObject <BAClientSystemXPCProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _progressObserverLock;
    NSXPCConnection *_connection;
    BAAppStoreProgressConfiguration *_recentProgressConfiguration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)applicationEventPerformedWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)applicationPrepareWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)applicationShouldTriggerPeriodicWithIdentifier:(id)a0 bundleURLPath:(id)a1 error:(id *)a2;
- (void)receiveAppStoreProgressWithAppBundleIdentifier:(id)a0 progressInfo:(id)a1;
- (void)runDebugCommand:(id)a0;
- (BOOL)updateAppStoreProgressObservationWithConfiguration:(id)a0 error:(id *)a1;

@end
