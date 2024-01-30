@interface APWUtil : NSObject

+ (double)rowHeight;
+ (id)hyphenatableStringForString:(id)a0;
+ (id)iconForBundleIdentifier:(id)a0;
+ (BOOL)isInternalBuild;
+ (id)_imageDescriptorForHomeScreenIcons;
+ (void)_updateRowHeightForContentSizeCategory;
+ (struct CGSize { double x0; double x1; })visibleSizeForHomeScreenIcons;
+ (BOOL)traitCollectionNeedsAXSize:(id)a0;
+ (id)preferredTraitCollectionForTraitCollection:(id)a0;

@end
