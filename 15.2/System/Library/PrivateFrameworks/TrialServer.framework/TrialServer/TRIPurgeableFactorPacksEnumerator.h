@class NSString;
@protocol TRINamespaceResolving, TRIPaths;

@interface TRIPurgeableFactorPacksEnumerator : NSObject <TRIPurgeableFactorPacksEnumerating> {
    id<TRIPaths> _paths;
    id<TRINamespaceResolving> _namespaceResolver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
