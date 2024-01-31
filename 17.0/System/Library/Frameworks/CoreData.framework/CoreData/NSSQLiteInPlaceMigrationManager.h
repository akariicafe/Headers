@interface NSSQLiteInPlaceMigrationManager : NSMigrationManager

+ (BOOL)_canMigrateWithMappingModel:(id)a0;

- (void)dealloc;
- (BOOL)migrateStoreFromURL:(id)a0 type:(id)a1 options:(id)a2 withMappingModel:(id)a3 toDestinationURL:(id)a4 destinationType:(id)a5 destinationOptions:(id)a6 error:(id *)a7;

@end
