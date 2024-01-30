@class _UIFlowLayoutRow, _UIFlowLayoutSection;

@interface _UIFlowLayoutItem : NSObject {
    struct { unsigned char sizeEstimated : 1; unsigned char positionEstimated : 1; unsigned char sizeHasBeenSet : 1; } _itemFlags;
}

@property (weak, nonatomic) _UIFlowLayoutSection *section;
@property (weak, nonatomic) _UIFlowLayoutRow *rowObject;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } itemFrame;
@property (nonatomic, getter=isSizeEstimated) BOOL sizeEstimated;
@property (nonatomic) BOOL sizeHasBeenSet;
@property (nonatomic, getter=isPositionEstimated) BOOL positionEstimated;

- (void).cxx_destruct;
- (id)copy;

@end
