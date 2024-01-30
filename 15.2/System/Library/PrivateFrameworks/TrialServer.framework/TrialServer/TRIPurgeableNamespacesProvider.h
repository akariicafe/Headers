@class NSString;
@protocol TRIClientNamespaceMetadataStoring, TRIPaths;

@interface TRIPurgeableNamespacesProvider : NSObject <TRIPurgeableNamespacesProviding> {
    id<TRIPaths> _paths;
    id<TRIClientNamespaceMetadataStoring> _clientNamespaceMetadataStorage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)partitionPurgeableNamespacesForPurgeabilityLevel:(int)a0 namespaceNamesPurgeableAtNamespaceLevel:(id *)a1 eagerPurgeableFactorsByNamespaceName:(id *)a2;
- (id)initWithPaths:(id)a0 clientNamespaceMetadataStorage:(id)a1;

@end
