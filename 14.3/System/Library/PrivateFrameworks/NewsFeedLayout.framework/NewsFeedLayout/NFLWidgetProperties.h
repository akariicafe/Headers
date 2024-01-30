@interface NFLWidgetProperties : NSObject <NSCopying>

@property (nonatomic) double containerHeight;
@property (nonatomic) struct CGSize { double width; double height; } gridSize;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) double itemSpacing;
@property (nonatomic) BOOL insetMargins;
@property (nonatomic) double topMarginInset;
@property (nonatomic) BOOL defaultForYou;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
