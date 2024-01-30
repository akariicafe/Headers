@class PLLibraryServicesManager, NSDate;

@interface PLCacheDeleteSupport : NSObject {
    struct fsid { int val[2]; } _fsid;
    PLLibraryServicesManager *_lsm;
}

@property (copy, nonatomic) NSDate *exitDeleteTime;

+ (id)_purgeableResourceDirectoriesForPathManager:(id)a0;
+ (id)purgeableStateDescriptionForFile:(id)a0;
+ (struct fsid { int x0[2]; })fsidForURL:(id)a0;
+ (BOOL)setClearPurgeableIsCloneStateOnPurgeableResourcesOnceWithPathManager:(id)a0 error:(id *)a1;
+ (BOOL)clearPurgeableFlagsForAllResourcesInPhotoLibraryURL:(id)a0;
+ (BOOL)isPurgeableFile:(id)a0 outIsPhotoType:(BOOL *)a1 outUrgencyLevel:(long long *)a2 error:(id *)a3;
+ (id)_clearablePurgeableResourceDirectoriesForPathManager:(id)a0;
+ (BOOL)clearPurgeableFlagForResource:(id)a0;
+ (BOOL)markPurgeableForFileAtURL:(id)a0 withUrgency:(long long)a1 outInode:(unsigned long long *)a2 error:(id *)a3;
+ (BOOL)verifyAndFixLocalAvailabilityForMissingResourcesUsingFileIDInManagedObjectContext:(id)a0 countPresent:(long long *)a1 countMissing:(long long *)a2 countUnableToVerify:(long long *)a3 error:(id *)a4;
+ (id)_unclearablePurgeableResourceDirectoriesForPathManager:(id)a0;
+ (BOOL)markPurgeableForFileAtURL:(id)a0 withUrgency:(long long)a1 outInode:(unsigned long long *)a2;
+ (void)clearPurgeableIsCloneStateOnPurgeableResourcesOnceIfNecessaryInManagedObjectContext:(id)a0 pathManager:(id)a1;

- (void)rescanResourcesFromFileSystem;
- (id)initWithLibraryServicesManager:(id)a0 cplStatus:(id)a1;
- (void)markAsNotLocallyAvailableForResourcesWithFileIDsToPath:(id)a0;
- (void)_markAsNotLocallyAvailableForResourcesWithFileIDsToPath:(id)a0 inLibrary:(id)a1;
- (BOOL)markResourceAsPurgeable:(id)a0 withUrgency:(long long)a1;
- (void)dealloc;
- (id)purgeableDirectories;
- (id)_newShortLivedPhotoLibrary;
- (void)invalidate;
- (BOOL)isFilePurgedForFileID:(id)a0 purgedPath:(id)a1;
- (BOOL)clearPurgeableFlagsForAllResources;
- (void).cxx_destruct;

@end
