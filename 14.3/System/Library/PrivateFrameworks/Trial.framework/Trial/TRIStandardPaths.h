@class TRIAppContainer;

@interface TRIStandardPaths : NSObject <TRIPaths> {
    unsigned int _schemaVersion;
    TRIAppContainer *_container;
    BOOL _isClient;
    struct atomic_flag { _Atomic BOOL _Value; } _loggedRootDir;
}

+ (id)sharedSystemPaths;
+ (unsigned int)resetStorageRequestSchemaVersion;
+ (id)resolveHardCodedPath:(id)a0;
+ (id)schemaVersionFile;
+ (unsigned int)legacySchemaVersion;
+ (unsigned int)currentSchemaVersion;

- (BOOL)validateWithError:(id *)a0;
- (id)init;
- (id)treatmentsDir;
- (void).cxx_destruct;
- (id)namespaceDescriptorsDefaultDir;
- (id)subjectDataFile;
- (id)container;
- (id)databaseDir;
- (id)trialRootDirWithError:(id *)a0;
- (id)_pathErrorWithDescription:(id)a0;
- (id)initWithCurrentSchemaVersion;
- (id)experimentsDir;
- (id)initWithSchemaVersion:(unsigned int)a0 container:(id)a1 asClientProcess:(BOOL)a2;
- (id)_trialSystemRootDir;
- (id)namespaceDescriptorsExperimentDir;
- (id)namespaceDescriptorsDir;
- (id)containerDir;
- (id)_realHomeDirectory;
- (id)systemDataFile;
- (id)pathsForContainer:(id)a0 asClientProcess:(BOOL)a1;
- (id)deviceIdentifierFile;
- (id)logDir;
- (id)assetStore;
- (id)namespaceDescriptorsPathForLayer:(unsigned long long)a0;
- (id)_versionSpecificSystemStorageDir;
- (id)_versionSpecificStorageDir;
- (id)namespaceDescriptorsRolloutDir;
- (id)_trialSystemRootDirWithError:(id *)a0;
- (id)trialRootDir;

@end
