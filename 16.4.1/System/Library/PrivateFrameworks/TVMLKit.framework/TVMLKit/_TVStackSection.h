@interface _TVStackSection : NSObject

@property (nonatomic) double sectionHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionSpacing;
@property (nonatomic) struct TVRowMetrics { long long rowType; double rowHeight; struct { double top; double bottom; } rowPadding; struct { double top; double bottom; } rowInset; struct { double top; double bottom; } rowInsetAlt; struct { double top; double bottom; } rowMargin; } compoundRowMetrics;
@property (nonatomic) double showcaseSectionHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } showcaseSectionSpacing;
@property (nonatomic) long long firstRowIndex;
@property (nonatomic) long long rowCount;
@property (nonatomic) long long firstItemRowIndex;

- (id)debugDescription;

@end
