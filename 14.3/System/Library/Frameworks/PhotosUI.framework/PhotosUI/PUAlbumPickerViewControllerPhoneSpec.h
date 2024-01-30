@interface PUAlbumPickerViewControllerPhoneSpec : PUAlbumPickerViewControllerSpec

- (unsigned long long)supportedInterfaceOrientations;
- (unsigned long long)bannerViewStyle;
- (id)newAlbumListViewController;
- (void)configureSessionInfo:(id)a0;
- (id)albumListViewControllerSpec;

@end
