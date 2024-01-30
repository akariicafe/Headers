@interface PUInternalGIFExportActivity : PXActivity

+ (long long)activityCategory;

- (id)activityTitle;
- (id)activityType;
- (id)_asset;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
