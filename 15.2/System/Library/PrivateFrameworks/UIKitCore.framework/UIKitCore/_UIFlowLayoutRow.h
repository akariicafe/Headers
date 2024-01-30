@class NSMutableArray, _UIFlowLayoutSection;

@interface _UIFlowLayoutRow : NSObject {
    BOOL _isValid;
    int _verticalAlignement;
    int _horizontalAlignement;
}

@property (weak, nonatomic) _UIFlowLayoutSection *section;
@property (nonatomic) struct CGSize { double width; double height; } rowSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rowFrame;
@property (nonatomic) long long index;
@property (readonly, nonatomic) NSMutableArray *items;
@property (nonatomic) BOOL complete;
@property (nonatomic) BOOL fixedItemSize;
@property (nonatomic) double availableSpace;

- (void)insertItem:(id)a0 atIndex:(long long)a1;
- (id)copyFromSection:(id)a0;
- (long long)indexOfNearestItemAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)snapshot;
- (void)layoutRow;
- (void).cxx_destruct;
- (id)init;
- (void)addItem:(id)a0 atEnd:(BOOL)a1;
- (void)removeItemAtIndex:(long long)a0;
- (void)invalidate;

@end
