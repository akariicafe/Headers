@class NSString;

@interface DTApplicationListingService : DTXService <DTApplicationWorkspaceClient, DTApplicationListingServiceRequests>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCapabilities:(id)a0;

- (void)applicationUninstalled:(id)a0;
- (void)_sendNotification:(id)a0 install:(BOOL)a1;
- (void)applicationInstalled:(id)a0;
- (id)installedApplicationsMatching:(id)a0 registerUpdateToken:(id)a1;
- (void)unregisterUpdateToken:(id)a0;

@end
