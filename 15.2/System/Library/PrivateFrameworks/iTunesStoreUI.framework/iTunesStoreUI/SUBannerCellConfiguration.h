@interface SUBannerCellConfiguration : SUItemCellConfiguration

+ (double)minimumRowHeight;
+ (double)rowHeightForContext:(id)a0 representedObject:(id)a1;
+ (id)copyDefaultContext;

- (void)reloadData;
- (id)init;
- (void)reloadImages;
- (void)reloadStrings;
- (void)reloadLayoutInformation;
- (id)copyImageDataProvider;
- (void)reloadAfterArtworkLoad;
- (struct CGSize { double x0; double x1; })_imageSizeForLayoutSize:(struct CGSize { double x0; double x1; })a0;

@end
