@class NSString;

@interface PUAudioClassificationAssetBrowserDebugViewController : PUPhotosAlbumViewController

@property (copy, nonatomic) NSString *audioClassificationName;

- (void)_presentTapToRadar;
- (void).cxx_destruct;
- (void)getTitle:(out id *)a0 prompt:(out id *)a1 shouldHideBackButton:(out BOOL *)a2 leftBarButtonItems:(out id *)a3 rightBarButtonItems:(out id *)a4;
- (void)_fileRadarWithIncorrectAssets:(id)a0;
- (BOOL)_writeDiagnosticsToURL:(id)a0 incorrectAssets:(id)a1;
- (id)_cloneAsset:(id)a0 toDirectory:(id)a1;
- (void)viewDidLoad;

@end
