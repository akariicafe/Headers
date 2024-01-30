@class PHAssetCollection;

@interface PXNavigationListAssetCollectionItem : PXNavigationListItem {
    BOOL _draggable;
    BOOL _reorderable;
    BOOL _renamable;
    BOOL _deletable;
}

@property (readonly, nonatomic) PHAssetCollection *collection;
@property (nonatomic) long long indentationLevel;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)glyphImageName;
- (BOOL)isDraggable;
- (id)initWithAssetCollection:(id)a0 itemCount:(long long)a1;
- (id)representedObject;
- (id)viewControllerForCollectionWithGridPresentation:(id)a0 existingAssetsFetchResult:(id)a1;
- (id)cpAnalyticsEventName;
- (id)imageNameForIdentifier;
- (BOOL)isReorderable;
- (BOOL)isRenamable;
- (BOOL)isDeletable;

@end
