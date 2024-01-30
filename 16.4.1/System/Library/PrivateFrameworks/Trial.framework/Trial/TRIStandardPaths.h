@class NSString, TRIAppContainer;

@interface TRIStandardPaths : NSObject <TRIPaths> {
    unsigned int _schemaVersion;
    TRIAppContainer *_container;
    BOOL _isClient;
    struct atomic_flag { _Atomic BOOL _Value; } _loggedRootDir;
    NSString *_containerPath;
}

+ (id)sharedSystemPaths;
+ (unsigned int)currentSchemaVersion;
+ (id)resolveHardCodedPath:(id)a0;
+ (unsigned int)resetStorageRequestSchemaVersion;
+ (unsigned int)legacySchemaVersion;
+ (id)schemaVersionFile;

- (id)systemDataFile;
- (id)logDir;
- (id)trialRootVolume;
- (id)_versionSpecificStorageDir;
- (id)_realHomeDirectory;
- (id)initWithCurrentSchemaVersion;
- (id)namespaceDescriptorsPathForLayer:(unsigned long long)a0;
- (id)pathsForContainer:(id)a0 asClientProcess:(BOOL)a1;
- (id)namespaceDescriptorsDevOverrideDir;
- (id)container;
- (id)initWithSchemaVersion:(unsigned int)a0 container:(id)a1 asClientProcess:(BOOL)a2;
- (id)_versionSpecificSystemStorageDir;
- (id)treatmentsDir;
- (id)_trialSystemRootDirWithError:(id *)a0;
- (id)trialRootDir;
- (id)assetStoreUsingGlobal:(BOOL)a0;
- (id)namespaceDescriptorsDir;
- (id)namespaceDescriptorsDefaultDir;
- (id)trialRootDirUsingGlobal:(BOOL)a0;
- (id)assetStore;
- (id)decryptionKeyDirForAppleInternal:(BOOL)a0;
- (id)deviceIdentifierFile;
- (id)_pathErrorWithDescription:(id)a0;
- (id)localTempDir;
- (id)containerDir;
- (id)_trialSystemRootDir;
- (BOOL)validateWithError:(id *)a0;
- (id)databaseDir;
- (id)init;
- (id)subjectDataFile;
- (id)_versionSpecificStorageDirUsingGlobal:(BOOL)a0;
- (id)initWithSchemaVersion:(unsigned int)a0;
- (id)namespaceDescriptorsRolloutDir;
- (void).cxx_destruct;
- (id)experimentsDir;
- (id)namespaceDescriptorsExperimentDir;
- (id)trialRootDirWithError:(id *)a0;

@end
