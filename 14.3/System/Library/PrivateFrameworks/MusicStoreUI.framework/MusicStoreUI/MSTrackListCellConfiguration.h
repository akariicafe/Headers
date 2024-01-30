@interface MSTrackListCellConfiguration : SUMediaItemCellConfiguration

@property (nonatomic) struct { unsigned long long localIndex; unsigned long long localCount; unsigned long long globalIndex; unsigned long long globalCount; } position;

+ (double)rowHeightForContext:(id)a0 representedObject:(id)a1;
+ (id)copyDefaultContext;

- (id)init;
- (unsigned long long)indexOfLabelForPurchaseAnimation;
- (void)drawBackgroundWithModifiers:(unsigned long long)a0;
- (id)fontForLabelAtIndex:(unsigned long long)a0;
- (id)colorForLabelAtIndex:(unsigned long long)a0 withModifiers:(unsigned long long)a1;
- (void)reloadImages;
- (void)reloadStrings;
- (void)reloadLayoutInformation;
- (BOOL)showContentRating;

@end
