@interface CCUIMutableLayoutOptions : CCUILayoutOptions

@property (nonatomic) double itemEdgeSize;
@property (nonatomic) double itemSpacing;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setItemSpacing:(double)a0;
- (void)setItemEdgeSize:(double)a0;

@end
