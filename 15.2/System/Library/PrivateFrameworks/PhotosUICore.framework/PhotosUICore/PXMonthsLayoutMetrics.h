@interface PXMonthsLayoutMetrics : PXLayoutMetrics

@property (nonatomic) long long sizeClass;
@property (nonatomic) long long orientation;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) double defaultSectionAspectRatio;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) double chapterHeaderHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } chapterHeaderPadding;
@property (nonatomic) BOOL displaceTopLeadingCardTitle;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
