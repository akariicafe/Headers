@class PPTSQLStorage, NSDictionary, PPTFlatStorage;

@interface PPTCoreStorage : NSObject

@property (retain) PPTSQLStorage *sqlStorage;
@property (retain) PPTFlatStorage *flatStorage;
@property (retain) NSDictionary *storageMap;

+ (id)sharedSQLStorage;
+ (void)setupMetadataStorage;
+ (id)storageClassForKey:(id)a0;
+ (void)setupStorage;
+ (id)sharedFlatStorage;
+ (void)startAllStorage;
+ (void)setupEntryObjects;
+ (id)storageClassForType:(int)a0;

- (void)mergePreUnlockDBFile;
- (id)init;
- (void).cxx_destruct;
- (void)startStorage;

@end
