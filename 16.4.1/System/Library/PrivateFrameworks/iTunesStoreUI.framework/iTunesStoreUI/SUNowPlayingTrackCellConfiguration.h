@interface SUNowPlayingTrackCellConfiguration : SUMediaItemCellConfiguration

+ (id)copyDefaultContext;
+ (double)rowHeightForContext:(id)a0 representedObject:(id)a1;

- (id)init;
- (id)colorForLabelAtIndex:(unsigned long long)a0 withModifiers:(unsigned long long)a1;
- (id)fontForLabelAtIndex:(unsigned long long)a0;
- (long long)mediaIconType;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (void)reloadStrings;
- (BOOL)showContentRating;

@end
