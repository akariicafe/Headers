@class _UIContextMenuListView, UIMenu;

@interface _UIContextMenuNode : NSObject

@property (retain, nonatomic) _UIContextMenuListView *listView;
@property (retain, nonatomic) UIMenu *menu;
@property (weak, nonatomic) _UIContextMenuNode *previous;
@property (weak, nonatomic) _UIContextMenuNode *next;
@property (nonatomic) BOOL leftOfParentWhenCascading;

- (id)description;
- (void).cxx_destruct;

@end
