@class PUAlbumPickerViewController;

@interface PUAddToAlbumActivity : PXActivity {
    PUAlbumPickerViewController *_albumPickerViewController;
}

+ (long long)activityCategory;

- (id)activityType;
- (void).cxx_destruct;
- (id)activityViewController;
- (id)_activityBundleImageConfiguration;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityTitle;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_systemImageName;

@end
