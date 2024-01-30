@interface PADatabaseManager : HCDatabaseManager

+ (id)sharedManager;

- (id)containerIdentifier;
- (void)logMessage:(id)a0;
- (id)cloudKitContainer;
- (id)currentConfiguration;
- (id)managedObjectModelName;
- (void)contentDidUpdate:(id)a0;
- (BOOL)saveConfiguration:(id)a0;

@end
