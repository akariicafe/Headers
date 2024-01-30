@interface PBFPosterConfigurationStoreArchiver : NSObject

+ (id)_unarchiveWithHandler:(id /* block */)a0 manifest:(out id *)a1 error:(out id *)a2;
+ (id)archiveConfigurationStoreWithCoordinator:(id)a0 error:(out id *)a1;
+ (long long)minSupportedArchiveVersion;
+ (id)unarchiveConfigurationStoreArchiveAtURL:(id)a0 manifest:(out id *)a1 error:(out id *)a2;
+ (id)unarchiveConfigurationStoreArchiveData:(id)a0 manifest:(out id *)a1 error:(out id *)a2;

@end
