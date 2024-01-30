@class NSSet, NSMutableDictionary, NSMutableOrderedSet;
@protocol AEPackageTransportDelegate;

@interface AEPackageTransport : PXObservable

@property (readonly, nonatomic) NSMutableOrderedSet *_allOrderedPackageIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary *_stagedPackagesByIdentifier;
@property (weak, nonatomic) id<AEPackageTransportDelegate> delegate;
@property (readonly, nonatomic) NSSet *expectedPackageIdentifiers;
@property (readonly, nonatomic) long long expectedPackageCount;

- (void)reportError:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (id)mutableChangeObject;
- (id)init;
- (void).cxx_destruct;
- (void)removePendingPackageIdentifier:(id)a0;
- (void)unstagePackagesWithIdentifiers:(id)a0;
- (void)_addPackageToStaging:(id)a0;
- (id)_orderedStagedIdentifiersIncludingPendingIdentifier:(id)a0;
- (void)_removePackageFromStagingWithIdentifier:(id)a0;
- (void)addPendingPackageIdentifier:(id)a0;
- (void)commitPackage:(id)a0;
- (id)orderedStagedIdentifiers;
- (id)packagesWithLivePhotoContent;
- (unsigned long long)proposedStagedIndexForPendingIdentifier:(id)a0;
- (void)removeAllExpectedPackagesWithIdentifiers:(id)a0;
- (void)stagePackage:(id)a0;
- (void)stagePackages:(id)a0;
- (void)stagePackages:(id)a0 andNotify:(BOOL)a1;
- (id)stagedPackageForIdentifier:(id)a0;
- (id)stagedPackages;
- (void)unstagePackageWithIdentifier:(id)a0;
- (void)unstagePackageWithIdentifier:(id)a0 andNotify:(BOOL)a1;

@end
