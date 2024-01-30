@class NSString;
@protocol TRIFactorLevelCaching;

@interface TRINamespaceFactorProvider : NSObject <TRINamespaceFactorProviding> {
    NSString *_treatmentId;
    unsigned int _namespaceVersion;
    unsigned int _namespaceCompatibilityVersion;
    id<TRIFactorLevelCaching> _factorLevels;
}

@property (readonly, nonatomic) NSString *namespaceName;
@property (readonly, nonatomic) unsigned int namespaceVersion;
@property (readonly, nonatomic) unsigned int namespaceCompatibilityVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)factorProviderWithNamespaceId:(unsigned int)a0 directory:(id)a1;
+ (id)_assetFilenameForFactor:(id)a0;
+ (id)pathForFactor:(id)a0 directory:(id)a1;
+ (id)factorProviderWithNamespaceName:(id)a0 directory:(id)a1;
+ (id)factorProviderWithNamespaceDescriptor:(id)a0 asClientProcess:(BOOL)a1;
+ (id)factorLevelsWithTreatmentData:(id)a0 referencePath:(id)a1 filteredByNamespaceName:(id)a2 outTreatmentId:(id *)a3 error:(id *)a4;

- (id)rolloutId;
- (id)factorLevels;
- (void).cxx_destruct;
- (id)levelForFactor:(id)a0;
- (id)initWithNamespaceName:(id)a0 namespaceVersion:(unsigned int)a1 namespaceCompatibilityVersion:(unsigned int)a2 factorLevels:(id)a3 treatmentId:(id)a4;
- (BOOL)saveToPath:(id)a0 copyAssets:(BOOL)a1;
- (id)overlayLevelsFromFactorProvider:(id)a0;
- (id)_copyAssetsToDirectory:(id)a0;
- (id)initWithNamespaceName:(id)a0 treatmentData:(id)a1 namespaceVersion:(unsigned int)a2 namespaceCompatibilityVersion:(unsigned int)a3 referencePath:(id)a4 error:(id *)a5;
- (BOOL)overwriteItemAtPath:(id)a0 withItemAtPath:(id)a1 error:(id *)a2;
- (unsigned int)namespaceId;
- (id)treatmentId;

@end
