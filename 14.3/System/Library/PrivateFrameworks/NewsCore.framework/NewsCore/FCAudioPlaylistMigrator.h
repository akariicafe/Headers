@class NSString;

@interface FCAudioPlaylistMigrator : NSObject <FCKeyValueStoreMigrating>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)keyValueStore:(id)a0 canMigrateFromVersion:(unsigned long long)a1;
- (id)keyValueStore:(id)a0 migrateObject:(id)a1 forKey:(id)a2 fromVersion:(unsigned long long)a3;

@end
