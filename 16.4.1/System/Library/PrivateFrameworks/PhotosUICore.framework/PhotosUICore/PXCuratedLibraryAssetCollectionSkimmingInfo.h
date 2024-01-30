@class PXIndexPathSet;
@protocol PXDisplayCollection;

@interface PXCuratedLibraryAssetCollectionSkimmingInfo : NSObject

@property (nonatomic) BOOL slideshowStarted;
@property (nonatomic) BOOL touchInteractionStarted;
@property (retain, nonatomic) id<PXDisplayCollection> parentAssetCollection;
@property (nonatomic) long long childCollectionsZoomLevel;
@property (retain, nonatomic) PXIndexPathSet *childCollectionsIndexes;
@property (nonatomic) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } currentChildCollectionIndexPath;

- (void).cxx_destruct;

@end
