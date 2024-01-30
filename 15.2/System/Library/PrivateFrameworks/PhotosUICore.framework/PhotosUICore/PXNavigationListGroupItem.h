@class PHCollection;

@interface PXNavigationListGroupItem : PXNavigationListItem {
    BOOL _group;
    BOOL _draggable;
    BOOL _expandable;
    PHCollection *_collection;
}

+ (id)titleForIdentifier:(id)a0;

- (BOOL)isDraggable;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isGroup;
- (BOOL)isExpandable;
- (id)collection;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 collection:(id)a1;

@end
