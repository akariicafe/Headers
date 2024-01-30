@class PXCompositeEditorialLayoutSpec;

@interface PXCompositeEditorialLayoutMetrics : PXLayoutMetrics

@property (readonly, nonatomic) PXCompositeEditorialLayoutSpec *editorialLayoutSpec;
@property (nonatomic) double interTileSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) BOOL useSaliency;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
