@interface NFStorageControllerApplet : NFStorageController

- (id)dbProtectionType;
- (void)deleteAllAppletEntities;
- (id)fetchAppletEntitiesWithError:(id *)a0;
- (id)_deleteAllAppletEntities;
- (id)name;
- (id)updateAppletEntitiesWithConfig:(id)a0;

@end
