@interface PADatabaseManager : HCDatabaseManager

+ (id)sharedManager;

- (id)containerIdentifier;
- (void)logMessage:(id)a0;
- (BOOL)saveConfiguration:(id)a0;
- (id)currentConfiguration;
- (id)cloudKitContainer;
- (id)managedObjectModelName;
- (void)contentDidUpdate:(id)a0;

@end
