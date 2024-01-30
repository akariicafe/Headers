@interface MSTrackListCellConfiguration : SUMediaItemCellConfiguration

@property (nonatomic) struct { unsigned long long localIndex; unsigned long long localCount; unsigned long long globalIndex; unsigned long long globalCount; } position;

+ (id)copyDefaultContext;
+ (double)rowHeightForContext:(id)a0 representedObject:(id)a1;

- (id)init;
- (id)colorForLabelAtIndex:(unsigned long long)a0 withModifiers:(unsigned long long)a1;
- (void)drawBackgroundWithModifiers:(unsigned long long)a0;
- (id)fontForLabelAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfLabelForPurchaseAnimation;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (void)reloadStrings;
- (BOOL)showContentRating;

@end
