@class NSString, TRIReferenceManagedDirReaderLock;
@protocol TRIFactorLevelCaching, TRIPaths;

@interface TRINamespaceFactorProvider : NSObject <TRINamespaceFactorProviding> {
    NSString *_treatmentId;
    unsigned int _namespaceCompatibilityVersion;
    id<TRIFactorLevelCaching> _factorLevels;
    TRIReferenceManagedDirReaderLock *_factorDirectoryLock;
    id<TRIPaths> _paths;
}

@property (readonly, nonatomic) NSString *namespaceName;
@property (readonly, nonatomic) unsigned int namespaceCompatibilityVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_assetFilenameForFactor:(id)a0;
+ (id)pathForFactor:(id)a0 directory:(id)a1;
+ (id)factorLevelsWithTreatmentData:(id)a0 referencePath:(id)a1 filteredByNamespaceName:(id)a2 outTreatmentId:(id *)a3 error:(id *)a4;
+ (id)factorProviderWithNamespaceName:(id)a0 paths:(id)a1 treatmentLayer:(unsigned long long)a2 faultOnMissingFactors:(BOOL)a3 shouldLockFactorDirectory:(BOOL)a4;
+ (id)factorProviderWithNamespaceDescriptor:(id)a0 paths:(id)a1 faultOnMissingFactors:(BOOL)a2 shouldLockFactorDirectory:(BOOL)a3;

- (unsigned int)namespaceId;
- (id)rolloutId;
- (void)dispose;
- (id)initWithNamespaceName:(id)a0 namespaceCompatibilityVersion:(unsigned int)a1 paths:(id)a2 factorLevels:(id)a3 treatmentId:(id)a4 factorDirectoryLock:(id)a5;
- (int)deploymentId;
- (id)levelForFactor:(id)a0;
- (id)initWithNamespaceName:(id)a0 treatmentData:(id)a1 namespaceCompatibilityVersion:(unsigned int)a2 paths:(id)a3 referencePath:(id)a4 factorDirectoryLock:(id)a5 error:(id *)a6;
- (id)overlayLevelsFromFactorProvider:(id)a0;
- (id)_copyAssetsToDirectory:(id)a0;
- (id)treatmentId;
- (id)experimentId;
- (void).cxx_destruct;
- (id)factorLevels;
- (BOOL)overwriteItemAtPath:(id)a0 withItemAtPath:(id)a1 error:(id *)a2;
- (BOOL)saveToPath:(id)a0 copyAssets:(BOOL)a1;

@end
