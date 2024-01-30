@interface PURemoveFromFeaturedPhotosActivity : PXActivity

+ (long long)activityCategory;
+ (long long)_activityStyle;

- (id)activityType;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_systemImageName;
- (void)performActivity;

@end
