@protocol PXDisplayAssetCollection;

@interface PXNavigationListDisplayAssetCollectionItem : PXNavigationListItem {
    BOOL _renamable;
    BOOL _deletable;
}

@property (nonatomic, getter=isDraggable) BOOL draggable;
@property (nonatomic, getter=isReorderable) BOOL reorderable;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> collection;
@property (nonatomic) long long indentationLevel;

- (BOOL)isRenamable;
- (BOOL)isDeletable;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)representedObject;
- (id)glyphImageName;
- (id)initWithIdentifier:(id)a0 title:(id)a1 displayAssetCollection:(id)a2 itemCount:(long long)a3;
- (id)imageNameForIdentifier;

@end
