@interface APWUtil : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)traitCollectionNeedsAXSize:(id)a0;
+ (struct CGSize { double x0; double x1; })visibleSizeForHomeScreenIcons;
+ (double)rowHeight;
+ (id)iconForBundleIdentifier:(id)a0;
+ (id)preferredTraitCollectionForTraitCollection:(id)a0;
+ (id)_imageDescriptorForHomeScreenIcons;
+ (void)_updateRowHeightForContentSizeCategory;
+ (id)hyphenatableStringForString:(id)a0;

@end
