@class SXDataTableBlueprint, NSMutableDictionary;
@protocol SXDataTableDataSource;

@interface SXDataTableLayouter : NSObject

@property (retain, nonatomic) SXDataTableBlueprint *blueprint;
@property (retain, nonatomic) NSMutableDictionary *minimumColumnWidths;
@property (retain, nonatomic) NSMutableDictionary *intendedColumnWidths;
@property (readonly, nonatomic) id<SXDataTableDataSource> dataSource;
@property (readonly, nonatomic) double currentWidth;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)blueprintForWidth:(double)a0;
- (id)blueprintUsingRowHeights:(id)a0 columnWidths:(id)a1 andTableWidth:(double)a2;
- (id)columnWidthsForWidth:(double)a0 resultingTableWidth:(double *)a1;
- (double)intendedPercentualWidthForColumnAtIndex:(unsigned long long)a0;
- (id)layoutDataTableForWidth:(double)a0;
- (double)minimumWidthForColumnAtIndex:(unsigned long long)a0;
- (id)rowHeightsForColumnWidths:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })tableInsets;
- (double)totalColumnDividerWidth;
- (double)totalTableBorderHeight;
- (double)totalTableBorderWidth;

@end
