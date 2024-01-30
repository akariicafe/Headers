@class NSString, NSIndexPath, UIDragItem;

@interface _UICollectionViewDropItem : NSObject <_UICollectionViewDropItem>

@property (retain, nonatomic) UIDragItem *dragItem;
@property (nonatomic) struct CGSize { double width; double height; } previewSize;
@property (retain, nonatomic) NSIndexPath *sourceIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDragItem:(id)a0 previewSize:(struct CGSize { double x0; double x1; })a1 sourceIndexPath:(id)a2;

@end
