@class NSString, TRIAppContainer;

@interface TRIStandardPaths : NSObject <TRIPaths> {
    unsigned int _schemaVersion;
    TRIAppContainer *_container;
    BOOL _isClient;
    struct atomic_flag { _Atomic BOOL _Value; } _loggedRootDir;
    NSString *_containerPath;
}

+ (unsigned int)legacySchemaVersion;
+ (id)resolveHardCodedPath:(id)a0;
+ (id)sharedSystemPaths;
+ (unsigned int)currentSchemaVersion;
+ (unsigned int)resetStorageRequestSchemaVersion;
+ (id)schemaVersionFile;

- (BOOL)validateWithError:(id *)a0;
- (id)namespaceDescriptorsPathForLayer:(unsigned long long)a0;
- (id)initWithCurrentSchemaVersion;
- (id)container;
- (id)subjectDataFile;
- (id)namespaceDescriptorsDefaultDir;
- (id)namespaceDescriptorsRolloutDir;
- (id)containerDir;
- (id)_versionSpecificStorageDir;
- (id)_trialSystemRootDirWithError:(id *)a0;
- (id)_pathErrorWithDescription:(id)a0;
- (id)_realHomeDirectory;
- (id)namespaceDescriptorsExperimentDir;
- (id)trialRootVolume;
- (id)_trialSystemRootDir;
- (id)systemDataFile;
- (id)pathsForContainer:(id)a0 asClientProcess:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithSchemaVersion:(unsigned int)a0 container:(id)a1 asClientProcess:(BOOL)a2;
- (id)init;
- (id)_versionSpecificSystemStorageDir;
- (id)experimentsDir;
- (id)treatmentsDir;
- (id)localTempDir;
- (id)trialRootDir;
- (id)namespaceDescriptorsDir;
- (id)initWithSchemaVersion:(unsigned int)a0;
- (id)assetStore;
- (id)deviceIdentifierFile;
- (id)logDir;
- (id)databaseDir;
- (id)trialRootDirWithError:(id *)a0;
- (id)decryptionKeyDirForAppleInternal:(BOOL)a0;

@end
