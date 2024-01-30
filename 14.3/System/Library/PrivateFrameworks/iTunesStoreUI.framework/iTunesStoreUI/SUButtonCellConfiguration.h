@interface SUButtonCellConfiguration : SUItemCellConfiguration

+ (double)rowHeightForContext:(id)a0 representedObject:(id)a1;

- (id)init;
- (id)fontForLabelAtIndex:(unsigned long long)a0;
- (id)colorForLabelAtIndex:(unsigned long long)a0 withModifiers:(unsigned long long)a1;
- (void)reloadStrings;
- (void)reloadLayoutInformation;

@end
