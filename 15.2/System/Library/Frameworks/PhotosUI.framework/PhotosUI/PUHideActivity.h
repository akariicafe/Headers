@class PUAssetHidingHelper;

@interface PUHideActivity : PXActivity {
    PUAssetHidingHelper *_assetHidingHelper;
}

+ (long long)activityCategory;

- (id)activityType;
- (void)setItemSourceController:(id)a0;
- (void).cxx_destruct;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (id)_assetHidingHelper;

@end
