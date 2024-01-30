@interface MSTrackListLoadMoreCellConfiguration : SULoadMoreMediaCellConfiguration

+ (double)rowHeightForContext:(id)a0 representedObject:(id)a1;

- (id)fontForLabelAtIndex:(unsigned long long)a0;
- (long long)textAlignmentForLabelAtIndex:(unsigned long long)a0;
- (id)colorForLabelAtIndex:(unsigned long long)a0 withModifiers:(unsigned long long)a1;
- (void)reloadLayoutInformation;

@end
