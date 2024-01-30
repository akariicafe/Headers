@class PUAssetHidingHelper;

@interface PUHideActivity : PXActivity {
    PUAssetHidingHelper *_assetHidingHelper;
}

+ (long long)activityCategory;

- (id)activityType;
- (void)setItemSourceController:(id)a0;
- (void).cxx_destruct;
- (id)activityTitle;
- (id)_assetHidingHelper;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_systemImageName;
- (void)performActivity;

@end
