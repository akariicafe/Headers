@class NSObject, TSPPackage;
@protocol OS_dispatch_queue;

@interface TSPSupportPackageReadCoordinator : TSPPackageReadCoordinator {
    TSPPackage *_documentPackage;
    NSObject<OS_dispatch_queue> *_documentComponentReadQueue;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)a0 package:(id)a1 packageURL:(id)a2 finalizeHandlerQueue:(id)a3 areExternalDataReferencesAllowed:(BOOL)a4 skipDocumentUpgrade:(BOOL)a5 archiveValidationMode:(long long)a6;
- (id)initWithContext:(id)a0 package:(id)a1 packageURL:(id)a2 finalizeHandlerQueue:(id)a3 areExternalDataReferencesAllowed:(BOOL)a4 skipDocumentUpgrade:(BOOL)a5 archiveValidationMode:(long long)a6 documentPackage:(id)a7;
- (BOOL)endReading;
- (long long)metadataObjectIdentifier;
- (void)prepareToReadComponentWithIdentifier:(long long)a0 forObjectIdentifier:(long long)a1 isWeakReference:(BOOL)a2 queue:(id)a3 completion:(id /* block */)a4;

@end
