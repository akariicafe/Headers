@class NSString, NSMutableDictionary;
@protocol TRIPaths;

@interface TRIDefaultFactorProvider : NSObject <TRIFactorProvidingPrivate> {
    id<TRIPaths> _paths;
    NSMutableDictionary *_factorProviders;
    NSMutableDictionary *_containerIds;
    BOOL _asClientProcess;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)levelForFactor:(id)a0 withNamespace:(unsigned int)a1;
- (id)init;
- (void).cxx_destruct;
- (unsigned int)compatibilityVersionWithNamespaceName:(id)a0;
- (void)setContainer:(id)a0 forNamespaceName:(id)a1;
- (id)factorLevelsWithNamespace:(unsigned int)a0;
- (id)_providerForNamespace:(id)a0;
- (id)rolloutIdWithNamespaceName:(id)a0;
- (void)invalidateFactorsWithNamespaceName:(id)a0;
- (BOOL)hasRegisteredNamespaceWithName:(id)a0;
- (id)factorLevelsWithNamespaceName:(id)a0;
- (id)initWithPaths:(id)a0;
- (BOOL)hasTreatmentInAnyOfLayers:(unsigned long long)a0 withNamespaceName:(id)a1;
- (id)treatmentIdWithNamespaceName:(id)a0;
- (id)levelForFactor:(id)a0 withNamespaceName:(id)a1;

@end
