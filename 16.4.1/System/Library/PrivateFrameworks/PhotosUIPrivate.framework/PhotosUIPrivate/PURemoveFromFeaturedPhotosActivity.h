@interface PURemoveFromFeaturedPhotosActivity : PXActivity

+ (long long)activityCategory;
+ (long long)_activityStyle;

- (id)activityTitle;
- (id)activityType;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
