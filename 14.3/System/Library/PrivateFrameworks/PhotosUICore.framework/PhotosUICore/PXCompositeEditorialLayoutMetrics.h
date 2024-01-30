@class PXCompositeEditorialLayoutSpec;

@interface PXCompositeEditorialLayoutMetrics : PXLayoutMetrics

@property (readonly, nonatomic) PXCompositeEditorialLayoutSpec *editorialLayoutSpec;
@property (nonatomic) double interTileSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) BOOL useSaliency;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
