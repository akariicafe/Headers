@interface MSUDataAccessor : NSObject

+ (void)buildErrorForRef:(id *)a0 code:(long long)a1 description:(id)a2;
+ (id)sharedDataAccessor;
+ (id)hardwareModelWithError:(id *)a0;
+ (id)errorNameForCode:(long long)a0;
+ (id)bootUUIDWithError:(id *)a0;
+ (id)ioreg:(id)a0 property:(id)a1 error:(id *)a2;
+ (unsigned long long)cryptex1TicketType;

- (id)resolveFilePathForEntry:(const struct path_table_entry { union { int x0; int x1; } x0; BOOL x1; id x2; id x3; } *)a0 error:(id *)a1;
- (id)copyPathForPersonalizedData:(int)a0 error:(id *)a1;
- (id)personalizedRootWithError:(id *)a0;
- (id)copyMountPointForVolumeType:(int)a0 error:(id *)a1;
- (id)copyPathForPersistentData:(int)a0 error:(id *)a1;
- (id)copyBootManifestHashWithError:(id *)a0;
- (id)hardwareRootWithError:(id *)a0;
- (id)init;
- (id)copyPersistentDataPathsWithError:(id *)a0;

@end
