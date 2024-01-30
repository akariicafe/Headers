@interface ACHRemoteTemplateAvailabilityListener : NSObject

- (id)init;
- (BOOL)_isKeyACHAvailabilityStateKey:(id)a0;
- (void)_unprotectedNanoUserDefaultsDidSyncWithNotification:(id)a0;

@end
