@class NSString, NSIndexPath, UIDragItem;

@interface _UITableViewDropItemImpl : NSObject <_UITableViewDropItem>

@property (retain, nonatomic) UIDragItem *dragItem;
@property (retain, nonatomic) NSIndexPath *sourceIndexPath;
@property (retain, nonatomic, getter=_translatedSourceIndexPath, setter=_setTranslatedSourceIndexPath:) NSIndexPath *translatedSourceIndexPath;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } previewSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_translateSourceIndexPath:(id /* block */)a0;
- (id)initWithDragItem:(id)a0 sourceIndexPath:(id)a1;

@end
