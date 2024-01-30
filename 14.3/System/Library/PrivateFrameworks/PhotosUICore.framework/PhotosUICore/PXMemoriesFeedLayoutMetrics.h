@class PXMemoriesSpec;

@interface PXMemoriesFeedLayoutMetrics : PXLayoutMetrics

@property (retain, nonatomic) PXMemoriesSpec *spec;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
