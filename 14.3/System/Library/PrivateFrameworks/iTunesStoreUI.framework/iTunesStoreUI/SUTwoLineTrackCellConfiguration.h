@interface SUTwoLineTrackCellConfiguration : SUMediaItemCellConfiguration

+ (double)rowHeightForContext:(id)a0 representedObject:(id)a1;
+ (id)copyDefaultContext;

- (id)init;
- (unsigned long long)indexOfLabelForPurchaseAnimation;
- (id)fontForLabelAtIndex:(unsigned long long)a0;
- (id)colorForLabelAtIndex:(unsigned long long)a0 withModifiers:(unsigned long long)a1;
- (void)reloadImages;
- (void)reloadStrings;
- (void)reloadLayoutInformation;

@end
