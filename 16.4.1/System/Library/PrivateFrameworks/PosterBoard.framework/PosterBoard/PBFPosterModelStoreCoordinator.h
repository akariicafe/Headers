@class NSUUID, NSString, NSURL, NSSet, NSMutableDictionary, NSDictionary, NSObject, NSFileManager;
@protocol OS_dispatch_queue;

@interface PBFPosterModelStoreCoordinator : NSObject {
    NSURL *_providerInfoURL;
    NSURL *_containerVersionsURL;
    NSURL *_providerURL;
    NSURL *_transientInternalInfoURL;
    NSDictionary *_providerInfo;
    NSMutableDictionary *_posterIdentityBySupplementByVersion;
}

@property (class, readonly, nonatomic) BOOL shouldBeExcludedFromBackup;
@property (class, readonly, nonatomic) NSString *expectedFileProtection;
@property (class, readonly, nonatomic) long long type;

@property (readonly, nonatomic) NSString *extensionIdentifier;
@property (readonly, nonatomic) NSFileManager *fileManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, copy, nonatomic) NSUUID *posterUUID;
@property (readonly, copy, nonatomic) NSURL *identifierURL;
@property (copy, nonatomic) NSDictionary *providerInfo;
@property (readonly, nonatomic) NSSet *snapshotURLs;

+ (id)createNewStoreCoordinatorWithPath:(id)a0 error:(id *)a1;
+ (id)expectedURLResourceValuesForAllPaths;

- (id)initWithPath:(id)a0;
- (void)prepareForDeletion;
- (id)checkEnvironmentConsistency;
- (void)reapEverythingExceptLatestVersion;
- (id)initExistingStoreCoordinatorWithExtensionIdentifier:(id)a0 identifierURL:(id)a1 posterUUID:(id)a2;
- (id)_accessQueue_buildIdentityForVersion:(unsigned long long)a0 supplement:(unsigned long long)a1;
- (id)_accessQueue_descriptorIdentifier;
- (void).cxx_destruct;
- (void)_accessQueue_prepareForDeletion;
- (void)_accessQueue_enumerateFilesWithinStoreIncludingKeys:(id)a0 usingBlock:(id /* block */)a1;
- (id)_accessQueue_addNewSupplementWithError:(out id *)a0;
- (id)_accessQueue_addNewVersionWithContents:(id)a0 error:(out id *)a1;
- (id)_accessQueue_checkEnvironmentConsistency;
- (BOOL)_accessQueue_configureFileSystemForNewContents:(id)a0 atPath:(id)a1 error:(out id *)a2;
- (id)_accessQueue_fetchIdentityForVersion:(unsigned long long)a0 supplement:(unsigned long long)a1 error:(id *)a2;
- (void)_accessQueue_fixupResourceValues;
- (id)_accessQueue_identityOfLatestVersion;
- (id)_accessQueue_providerInfoWithError:(out id *)a0;
- (void)_accessQueue_removeSupplement:(unsigned long long)a0 forVersion:(unsigned long long)a1 error:(out id *)a2;
- (id)_accessQueue_snapshotURLs;
- (void)_accessQueue_writeProviderInfo:(id)a0 error:(out id *)a1;
- (id)_posterPathForIdentity:(id)a0;
- (id)addNewSupplementWithError:(out id *)a0;
- (id)addNewVersionWithContents:(id)a0 error:(out id *)a1;
- (id)allPosterPaths;
- (void)enumerateFilesWithinStoreIncludingKeys:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)hasKnownVersions;
- (id)identityForVersion:(unsigned long long)a0 supplement:(unsigned long long)a1;
- (id)identityOfLatestVersion;
- (id)pathForIdentity:(id)a0;
- (id)pathForVersion:(unsigned long long)a0 supplement:(unsigned long long)a1;
- (id)pathOfLatestVersion;
- (void)removeSupplement:(unsigned long long)a0 forVersion:(unsigned long long)a1 error:(out id *)a2;
- (void)setProviderInfo:(id)a0 error:(out id *)a1;

@end
