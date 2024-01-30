@interface PURemoveFromFeaturedPhotosActivity : PXActivity

+ (long long)_activityStyle;
+ (long long)activityCategory;

- (id)activityType;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
