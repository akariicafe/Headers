@class NSURL;

@interface IXGlobalConfiguration : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dynamicPropertyLock;
}

@property (readonly, nonatomic) NSURL *daemonUserHome;
@property (readonly, nonatomic) NSURL *rootPath;
@property (readonly, nonatomic) NSURL *dataStorageHome;
@property (readonly, nonatomic) NSURL *frameworkURL;
@property (readonly, nonatomic) NSURL *userVolumeURL;
@property (readonly, nonatomic) unsigned int daemonUID;
@property (readonly, nonatomic) unsigned int daemonGID;

+ (id)sharedInstance;

- (id)dataDirectoryWithError:(id *)a0;
- (id)dataDirectoryAbortingOnError;
- (id)promiseStagingRootDirectoryAbortingOnError;
- (id)removabilityDirectoryAbortingOnError;
- (id)extractedInstallableStagingDirectory:(id *)a0;
- (id)removabilityDirectoryWithError:(id *)a0;
- (id)init;
- (id)remoteInstallationStagingDirectory:(id *)a0;
- (id)_dataStorageHomeURLWithError:(id *)a0;
- (void)createDirectories;
- (void).cxx_destruct;
- (id)promiseStagingRootDirectoryWithError:(id *)a0;

@end
