@class PHCollection;

@interface PXNavigationListGroupItem : PXNavigationListItem {
    BOOL _group;
    BOOL _draggable;
    BOOL _expandable;
    PHCollection *_collection;
}

+ (id)titleForIdentifier:(id)a0;

- (BOOL)isGroup;
- (BOOL)isExpandable;
- (id)collection;
- (id)initWithIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isDraggable;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 collection:(id)a1;

@end
