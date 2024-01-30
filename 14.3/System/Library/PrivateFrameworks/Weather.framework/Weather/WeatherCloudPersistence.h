@class NSString, WeatherCloudMigrator, NSUbiquitousKeyValueStore;
@protocol WeatherCloudPersistenceDelegate;

@interface WeatherCloudPersistence : NSObject <WeatherPreferencesPersistence>

@property (readonly, nonatomic) WeatherCloudMigrator *migrator;
@property (retain, nonatomic) NSUbiquitousKeyValueStore *activeCloudStore;
@property (retain, nonatomic) NSUbiquitousKeyValueStore *nonEncryptedStore;
@property (retain, nonatomic) NSUbiquitousKeyValueStore *encryptedStore;
@property (weak) id<WeatherCloudPersistenceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cloudPersistenceWithDelegate:(id)a0;
+ (BOOL)processIsWhitelistedForSync;

- (id)objectForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)synchronizeWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (BOOL)isInitialSyncNotification:(id)a0;
- (void).cxx_destruct;
- (id)stringForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (BOOL)synchronize;
- (id)dictionaryForKey:(id)a0;
- (void)encryptedStoreChanged:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)arrayForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)cloudCitiesChangedExternally:(id)a0;

@end
