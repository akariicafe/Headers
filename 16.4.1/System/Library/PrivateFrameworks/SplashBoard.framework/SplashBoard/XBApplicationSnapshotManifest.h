@class NSString, XBApplicationSnapshotManifestImpl;
@protocol XBApplicationSnapshotManifestDelegate;

@interface XBApplicationSnapshotManifest : NSObject <XBApplicationSnapshotManifestDelegate, BSDescriptionProviding>

@property (readonly, weak, nonatomic) XBApplicationSnapshotManifestImpl *manifestImpl;
@property (weak, nonatomic) id<XBApplicationSnapshotManifestDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *containerPath;
@property (readonly, copy, nonatomic) NSString *defaultGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)handleTrackingStateChange;
+ (void)deleteAllSystemSnapshots;
+ (id)debugDescription;
+ (id)_manifestsByIdentity;

- (id)createSnapshotWithGroupID:(id)a0;
- (void)deleteAllSnapshots;
- (id)initWithApplicationInfo:(id)a0;
- (void)deleteSnapshotsForGroupID:(id)a0 matchingPredicate:(id)a1;
- (id)snapshotsForGroupID:(id)a0 matchingPredicate:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)generateImageForSnapshot:(id)a0 dataProvider:(id)a1 options:(unsigned long long)a2 imageGeneratedHandler:(id /* block */)a3 imageDataSavedHandler:(id /* block */)a4;
- (id)succinctDescriptionBuilder;
- (id)snapshotsForGroupIDs:(id)a0;
- (id)snapshotsForGroupIDs:(id)a0 fetchRequest:(id)a1;
- (void)endTrackingImageDeletions;
- (void)archive;
- (void)updateSnapshotsAPFSPurgability:(BOOL)a0;
- (void)beginSnapshotAccessTransaction:(id /* block */)a0 completion:(id /* block */)a1;
- (void)saveSnapshot:(id)a0 atPath:(id)a1 withContext:(id)a2;
- (id)snapshotsForGroupIDs:(id)a0 matchingPredicate:(id)a1;
- (void)deleteSnapshotsMatchingPredicate:(id)a0;
- (void)dealloc;
- (void)manifest:(id)a0 didPurgeProtectedContentSnapshotsWithGroupIdentifiers:(id)a1;
- (void)purgeSnapshotsWithProtectedContent;
- (void)deleteSnapshots:(id)a0;
- (id)createVariantForSnapshot:(id)a0 withIdentifier:(id)a1;
- (void)deleteSnapshot:(id)a0;
- (id)_allSnapshotGroups;
- (id)succinctDescription;
- (void)deleteSnapshotsForGroupID:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)deleteSnapshotsUsingPredicateBuilder:(id /* block */)a0;
- (id)snapshotsForGroupID:(id)a0 fetchRequest:(id)a1;
- (void)beginTrackingImageDeletions;
- (BOOL)_invalidate;
- (void).cxx_destruct;
- (BOOL)snapshotsConsideredUnpurgableByAPFS;
- (id)snapshotsForGroupID:(id)a0;
- (void)deleteSnapshotsForGroupID:(id)a0 predicateBuilder:(id /* block */)a1;
- (void)generateImageForSnapshot:(id)a0 dataProvider:(id)a1 writeToFile:(BOOL)a2 imageGeneratedHandler:(id /* block */)a3 imageDataSavedHandler:(id /* block */)a4;
- (void)generateImageForSnapshot:(id)a0 dataProvider:(id)a1 writeToFile:(BOOL)a2 completion:(id /* block */)a3;
- (void)generateImageForSnapshot:(id)a0 dataProvider:(id)a1 writeToFile:(BOOL)a2 didGenerateImage:(id /* block */)a3 didSaveImage:(id /* block */)a4;
- (id)initWithContainerIdentity:(id)a0 store:(id)a1;

@end
