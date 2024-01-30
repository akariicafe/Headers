@protocol PXDisplayAssetCollection;

@interface PXNavigationListDisplayAssetCollectionItem : PXNavigationListItem {
    BOOL _renamable;
    BOOL _deletable;
}

@property (nonatomic, getter=isReorderable) BOOL reorderable;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> collection;
@property (nonatomic) long long indentationLevel;
@property (nonatomic) unsigned long long lockState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isDraggable;
- (void).cxx_destruct;
- (BOOL)isDeletable;
- (id)representedObject;
- (id)glyphImageName;
- (id)imageNameForIdentifier;
- (id)initWithIdentifier:(id)a0 title:(id)a1 displayAssetCollection:(id)a2 itemCount:(long long)a3;
- (BOOL)isRenamable;

@end
