@interface CHDChartTypeWithGrouping : CHDChartType {
    int mGrouping;
}

- (int)grouping;
- (void)setGrouping:(int)a0;
- (id)chdGroupingString;
- (id)initWithChart:(id)a0;
- (BOOL)isGroupingStacked;

@end
