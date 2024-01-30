@class UIViewController;

@interface PUAddToAlbumActivity : PXActivity {
    UIViewController *_presenterViewController;
}

+ (long long)activityCategory;

- (id)activityType;
- (void).cxx_destruct;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)_activityBundleImageConfiguration;
- (id)activityImage;
- (id)_albumPickerViewControllerWithAssets:(id)a0;
- (id)activityTitle;
- (id)_syndicationAssetSavingHelperWithAssets:(id)a0;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
