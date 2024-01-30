@interface PADatabaseManager : HCDatabaseManager

+ (id)sharedManager;

- (id)currentConfiguration;
- (id)containerIdentifier;
- (id)cloudKitContainer;
- (BOOL)saveConfiguration:(id)a0;
- (void)logMessage:(id)a0;
- (id)managedObjectModelName;
- (void)contentDidUpdate:(id)a0;

@end
