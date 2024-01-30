@class PHCollectionList, NSString;

@interface PXNavigationListCollectionListItem : PXNavigationListItem {
    BOOL _draggable;
    BOOL _reorderable;
    BOOL _renamable;
    BOOL _deletable;
    BOOL _expandable;
    NSString *_glyphImageName;
}

@property (readonly, nonatomic) PHCollectionList *collection;
@property (nonatomic) long long indentationLevel;
@property (nonatomic, getter=isExpanded) BOOL expanded;

- (BOOL)isExpandable;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)glyphImageName;
- (BOOL)isDraggable;
- (id)representedObject;
- (id)viewControllerForCollectionWithGridPresentation:(id)a0 existingAssetsFetchResult:(id)a1;
- (id)cpAnalyticsEventName;
- (id)initWithCollectionList:(id)a0 itemCount:(long long)a1;
- (BOOL)isReorderable;
- (BOOL)isRenamable;
- (BOOL)isDeletable;

@end
