@class PHAssetCollection;

@interface PXNavigationListAssetCollectionItem : PXNavigationListDisplayAssetCollectionItem

@property (readonly, nonatomic) PHAssetCollection *collection;

- (id)cpAnalyticsEventName;
- (id)initWithAssetCollection:(id)a0 itemCount:(long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)viewControllerForCollectionWithGridPresentation:(id)a0 existingAssetsFetchResult:(id)a1;

@end
