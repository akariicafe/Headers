@interface PXGridLayoutMetrics : PXLayoutMetrics

@property (nonatomic) long long axis;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) struct CGSize { double width; double height; } interItemSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) BOOL displaysHeaderTile;
@property (nonatomic) struct CGSize { double width; double height; } headerSize;
@property (nonatomic) struct CGSize { double width; double height; } headerSpacing;
@property (nonatomic) struct CGSize { double width; double height; } footerSize;
@property (nonatomic) unsigned long long additionalTileCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
