@interface SUNowPlayingTrackCellConfiguration : SUMediaItemCellConfiguration

+ (double)rowHeightForContext:(id)a0 representedObject:(id)a1;
+ (id)copyDefaultContext;

- (id)init;
- (id)fontForLabelAtIndex:(unsigned long long)a0;
- (id)colorForLabelAtIndex:(unsigned long long)a0 withModifiers:(unsigned long long)a1;
- (void)reloadImages;
- (void)reloadStrings;
- (void)reloadLayoutInformation;
- (long long)mediaIconType;
- (BOOL)showContentRating;

@end
