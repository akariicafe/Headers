@class NSMutableDictionary, TRINamespaceResolver;

@interface TRIDefaultFactorProviderGuardedData : NSObject {
    TRINamespaceResolver *namespaceResolver;
    NSMutableDictionary *factorProviders;
    NSMutableDictionary *containerIds;
}

- (void).cxx_destruct;

@end
