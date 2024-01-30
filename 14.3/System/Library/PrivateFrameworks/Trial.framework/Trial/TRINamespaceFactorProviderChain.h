@class NSString, NSArray;
@protocol TRINamespaceFactorProviding;

@interface TRINamespaceFactorProviderChain : NSObject <TRINamespaceFactorProviding> {
    NSArray *_directoryChain;
    NSArray *_providerChain;
    id<TRINamespaceFactorProviding> _installedProvider;
    id<TRINamespaceFactorProviding> _rolloutProvider;
    id<TRINamespaceFactorProviding> _experimentProvider;
}

@property (readonly, nonatomic) NSString *namespaceName;
@property (readonly, nonatomic) unsigned int namespaceId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)factorProviderWithNamespaceName:(id)a0 directoryChain:(id)a1;
+ (id)factorProviderWithNamespaceName:(id)a0 directoryChain:(id)a1 treatmentLayers:(id)a2;
+ (id)factorProviderWithPaths:(id)a0 namespaceName:(id)a1;

- (id)rolloutId;
- (id)factorLevels;
- (void).cxx_destruct;
- (id)levelForFactor:(id)a0;
- (id)treatmentIdForFactor:(id)a0;
- (BOOL)hasAnyTreatmentInLayers:(unsigned long long)a0;
- (BOOL)isRegistered;
- (unsigned int)namespaceVersion;
- (unsigned int)namespaceCompatibilityVersion;
- (id)treatmentId;
- (id)initWithNamespaceName:(id)a0 directoryChain:(id)a1 treatmentLayers:(id)a2;

@end
