@class VideosExtrasBackgroundViewController, NSMapTable;

@interface VideosExtrasElementViewController : UIViewController {
    VideosExtrasBackgroundViewController *_backgroundViewController;
    NSMapTable *_bannerButtonMap;
}

@property (nonatomic, getter=isWide) BOOL wide;

+ (id)_borderView;

- (void)viewWillAppear:(BOOL)a0;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)backgroundViewController;
- (void)_prepareLayout;
- (void)_startBackgroundAudio;
- (void)configureBackgroundWithElements:(id)a0;
- (unsigned long long)extrasSize;
- (void)_configureBannerWithElement:(id)a0;
- (void)_didActivateButtonWithItem:(id)a0;
- (id)_installBackdrop:(id)a0;

@end
