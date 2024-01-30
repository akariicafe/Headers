@interface UIAirDropActivity : UIActivity

+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;
+ (BOOL)canPerformActivityWithItemClasses:(id)a0;
+ (id)classNamesForItems:(id)a0;
+ (id)classesForClassNames:(id)a0;

- (id)activityTitle;
- (id)activityType;
- (struct CGSize { double x0; double x1; })_thumbnailSize;
- (id)_activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_activitySettingsImage;
- (BOOL)_allowsAutoCancelOnDismiss;

@end
