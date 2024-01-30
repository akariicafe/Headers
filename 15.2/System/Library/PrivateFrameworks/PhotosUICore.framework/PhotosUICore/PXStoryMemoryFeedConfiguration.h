@class PHPhotoLibrary;

@interface PXStoryMemoryFeedConfiguration : PXStoryFeedConfiguration

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)viewControllerTitle;
- (id)fullFeedViewController;
- (id)copyForFullFeed;
- (id)objectReferenceForDestination:(id)a0;
- (void)handleContentSeen;
- (id)initWithMemoriesFeedDataSourceManager:(id)a0 layoutKind:(long long)a1;
- (id)initWithMemoryForYouDataSourceManager:(id)a0 layoutKind:(long long)a1;
- (id)initWithMemoriesInPhotoLibrary:(id)a0 layoutKind:(long long)a1;
- (id)initWithSyntheticSectionCount:(long long)a0 numberOfItemsPerSection:(long long)a1 layoutKind:(long long)a2;
- (id)initWithDataSourceManagerPromise:(id /* block */)a0 specManagerPromise:(id /* block */)a1 itemLayoutFactory:(id)a2 layoutKind:(long long)a3 photoLibrary:(id)a4;
- (id)initWithDataSourceManagerPromise:(id /* block */)a0 specManagerPromise:(id /* block */)a1 itemLayoutFactory:(id)a2 layoutKind:(long long)a3;
- (id)copyWithLayoutKind:(long long)a0;
- (id)_defaultSpecManagerWithLayoutKind:(long long)a0 extendedTraitCollection:(id)a1;
- (id)_defaultItemLayoutFactory;
- (id)_syntheticItemLayoutFactory;
- (id)_photoKitMediaProviderWithPhotoLibrary:(id)a0;
- (id)_defaultActionPerformer;
- (BOOL)_shouldEmbedContentLayoutForLayoutKind:(long long)a0;

@end
