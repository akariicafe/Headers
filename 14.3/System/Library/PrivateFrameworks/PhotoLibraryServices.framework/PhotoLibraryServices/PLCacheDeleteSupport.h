@class PLPhotoLibrary, NSDate;

@interface PLCacheDeleteSupport : NSObject {
    PLPhotoLibrary *_photoLibrary;
    struct fsid { int val[2]; } _fsid;
}

@property (copy, nonatomic) NSDate *exitDeleteTime;

+ (id)purgeableStateDescriptionForFile:(id)a0;
+ (BOOL)markPurgeableForFileAtURL:(id)a0 withUrgency:(long long)a1 outInode:(unsigned long long *)a2;
+ (id)_purgeableResourceDirectoriesForPathManager:(id)a0;
+ (void)registerNullHandler;
+ (struct fsid { int x0[2]; })fsidForURL:(id)a0;
+ (BOOL)verifyAndFixLocalAvailabilityForMissingResourcesUsingFileIDInManagedObjectContext:(id)a0 countPresent:(long long *)a1 countMissing:(long long *)a2 countUnableToVerify:(long long *)a3 error:(id *)a4;
+ (BOOL)isPurgeableFile:(id)a0 outIsPhotoType:(BOOL *)a1 outUrgencyLevel:(long long *)a2;
+ (BOOL)clearPurgeableFlagsForAllResourcesInPhotoLibraryURL:(id)a0;

- (BOOL)clearPurgeableFlagsForAllResources;
- (void).cxx_destruct;
- (BOOL)markResourceAsPurgeable:(id)a0 withUrgency:(long long)a1;
- (BOOL)clearPurgeableFlagForResource:(id)a0;
- (id)initWithPhotoLibrary:(id)a0 cplStatus:(id)a1;
- (void)dealloc;
- (void)_installPurgeObserverAndProcessAlreadyRemovedFiles;
- (void)_processRemovedFiles:(id)a0 inMountPoint:(id)a1;
- (BOOL)_isFilePurgedForFileID:(id)a0 purgedPath:(id)a1;
- (void)_rescanResourcesFromFileSystem;
- (void)_markAsNotLocallyAvailableForResourcesWithFileIDsToPath:(id)a0;
- (void)invalidate;

@end
