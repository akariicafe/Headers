@class PPTSQLStorage, NSDictionary, PPTFlatStorage;

@interface PPTCoreStorage : NSObject

@property (retain) PPTSQLStorage *sqlStorage;
@property (retain) PPTFlatStorage *flatStorage;
@property (retain) NSDictionary *storageMap;

+ (id)sharedFlatStorage;
+ (void)startAllStorage;
+ (id)sharedSQLStorage;
+ (void)setupStorage;
+ (id)storageClassForType:(int)a0;
+ (void)setupEntryObjects;
+ (id)storageClassForKey:(id)a0;
+ (void)setupStorageVersions;

- (void)startStorage;
- (void).cxx_destruct;
- (id)init;

@end
