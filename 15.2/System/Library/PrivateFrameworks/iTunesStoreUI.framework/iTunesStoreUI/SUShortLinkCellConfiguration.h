@interface SUShortLinkCellConfiguration : SUMediaItemCellConfiguration

+ (double)rowHeightForContext:(id)a0 representedObject:(id)a1;
+ (id)copyDefaultContext;

- (id)init;
- (id)fontForLabelAtIndex:(unsigned long long)a0;
- (id)colorForLabelAtIndex:(unsigned long long)a0 withModifiers:(unsigned long long)a1;
- (void)reloadStrings;
- (void)reloadLayoutInformation;
- (id)copyImageDataProvider;
- (BOOL)showContentRating;

@end
