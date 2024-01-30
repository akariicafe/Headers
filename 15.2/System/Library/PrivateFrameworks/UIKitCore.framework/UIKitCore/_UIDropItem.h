@class NSItemProvider, UIDragItem;

@interface _UIDropItem : UIDragItem

@property (retain, nonatomic, getter=_localDragItem, setter=_setLocalDragItem:) UIDragItem *localDragItem;
@property (retain, nonatomic, getter=_dropItemProvider, setter=_setDropItemProvider:) NSItemProvider *dropItemProvider;

- (void)setLocalObject:(id)a0;
- (id)itemProvider;
- (void).cxx_destruct;
- (id)localObject;
- (void)_setPrivateLocalContext:(id)a0;
- (id)_privateLocalContext;

@end
