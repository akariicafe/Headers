@class NSMutableDictionary, NSSet, NSMutableSet, NSMutableArray;
@protocol AEPackageTransportDelegate;

@interface AEPackageTransport : PXObservable

@property (readonly, nonatomic) NSMutableArray *_stagedIdentifiersInOrder;
@property (readonly, nonatomic) NSMutableDictionary *_stagedPackagesByIdentifier;
@property (readonly, nonatomic) NSMutableSet *_pendingPackageIdentifiers;
@property (weak, nonatomic) id<AEPackageTransportDelegate> delegate;
@property (readonly, nonatomic) NSSet *expectedPackageIdentifiers;
@property (readonly, nonatomic) long long expectedPackageCount;

- (id)init;
- (void).cxx_destruct;
- (void)performChanges:(id /* block */)a0;
- (id)mutableChangeObject;
- (void)reportError:(id)a0;
- (void)_addPackageToStaging:(id)a0;
- (void)_removePackageFromStagingWithIdentifier:(id)a0;
- (void)commitPackage:(id)a0;
- (void)stagePackage:(id)a0;
- (void)stagePackages:(id)a0;
- (void)stagePackages:(id)a0 andNotify:(BOOL)a1;
- (void)unstagePackageWithIdentifier:(id)a0;
- (void)unstagePackageWithIdentifier:(id)a0 andNotify:(BOOL)a1;
- (void)unstagePackagesWithIdentifiers:(id)a0;
- (id)orderedStagedIdentifiers;
- (id)stagedPackageForIdentifier:(id)a0;
- (id)stagedPackages;
- (void)addPendingPackageIdentifier:(id)a0;
- (void)removePendingPackageIdentifier:(id)a0;
- (id)packagesWithLivePhotoContent;

@end
