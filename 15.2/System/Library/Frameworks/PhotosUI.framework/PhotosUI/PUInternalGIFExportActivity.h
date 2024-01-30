@interface PUInternalGIFExportActivity : PXActivity

+ (long long)activityCategory;

- (id)activityType;
- (id)activityTitle;
- (id)_systemImageName;
- (id)_asset;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
