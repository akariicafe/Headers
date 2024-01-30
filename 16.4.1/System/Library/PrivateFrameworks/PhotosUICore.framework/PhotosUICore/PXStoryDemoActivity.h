@interface PXStoryDemoActivity : PXActivity

+ (long long)activityCategory;

- (id)activityTitle;
- (id)assets;
- (id)activityType;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
