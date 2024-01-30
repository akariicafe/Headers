@interface PXMemoriesFeedWidgetLayoutMetrics : PXMemoriesFeedLayoutMetrics

@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) unsigned long long numberOfRows;
@property (nonatomic) struct CGSize { double width; double height; } interitemSpacing;
@property (nonatomic) long long layoutAxis;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
