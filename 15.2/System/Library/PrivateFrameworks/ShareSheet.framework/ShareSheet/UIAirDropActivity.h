@interface UIAirDropActivity : UIActivity

+ (id)classNamesForItems:(id)a0;
+ (id)classesForClassNames:(id)a0;
+ (BOOL)canPerformActivityWithItemClasses:(id)a0;
+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;

- (id)activityType;
- (id)_activitySettingsImage;
- (id)_activityImage;
- (struct CGSize { double x0; double x1; })_thumbnailSize;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
