@class NSString;

@interface STCoreDataPersistenceSource : NSObject <STPersistenceSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_coreUserForIdentifier:(id)a0 inContext:(id)a1;
- (void)saveCommunicationSafetySettingsForDSID:(id)a0 checkForUnsafePhotos:(BOOL)a1 communicationSafetyNotificationEnabled:(BOOL)a2 communicationSafetyAnalyticsEnabled:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)userDataWithIdentifier:(id)a0;

@end
