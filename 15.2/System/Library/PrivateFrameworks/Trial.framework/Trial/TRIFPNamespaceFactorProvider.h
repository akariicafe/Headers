@class NSString, NSSet, TRIReferenceManagedDirReaderLock;
@protocol TRIFactorLevelCaching, TRIFactorPackId;

@interface TRIFPNamespaceFactorProvider : NSObject <TRINamespaceFactorProviding> {
    NSString *_parentId;
    int _deploymentId;
    NSString *_namespaceName;
    NSSet *_namespaceCompatibilityVersions;
    NSString<TRIFactorPackId> *_factorPackId;
    id<TRIFactorLevelCaching> _factorLevels;
    TRIReferenceManagedDirReaderLock *_dirLock;
}

@property (readonly, nonatomic) BOOL promotable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_factorLevelsWithFactorPackData:(id)a0 loadedFromProtoPath:(id)a1 referencePath:(id)a2 outFactorPackId:(id *)a3 outNamespaceName:(id *)a4 outNCVs:(id *)a5;

- (unsigned int)namespaceId;
- (id)rolloutId;
- (void)dispose;
- (int)deploymentId;
- (unsigned int)namespaceCompatibilityVersion;
- (id)levelForFactor:(id)a0;
- (id)initWithPath:(id)a0 parentId:(id)a1 deploymentId:(int)a2 promotable:(BOOL)a3;
- (id)treatmentId;
- (id)experimentId;
- (void).cxx_destruct;
- (id)init;
- (id)namespaceName;
- (id)factorLevels;
- (id)initWithParentId:(id)a0 deploymentId:(int)a1 promotable:(BOOL)a2;

@end
