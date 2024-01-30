@interface UIAirDropActivity : UIActivity

+ (long long)activityCategory;
+ (id)classNamesForItems:(id)a0;
+ (id)classesForClassNames:(id)a0;
+ (unsigned long long)_xpcAttributes;
+ (BOOL)canPerformActivityWithItemClasses:(id)a0;

- (id)activityType;
- (id)_activityImage;
- (struct CGSize { double x0; double x1; })_thumbnailSize;
- (id)activityTitle;
- (id)_activitySettingsImage;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
