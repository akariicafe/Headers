@class VideosExtrasBannerController, VideosExtrasGridElementViewController;

@interface VideosExtrasGalleryTemplateViewController : VideosExtrasTemplateViewController {
    VideosExtrasBannerController *_bannerController;
    VideosExtrasGridElementViewController *_gridViewController;
}

@property (nonatomic) unsigned long long selectedItemIndex;

- (id)contentScrollView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)showsPlaceholder;
- (id)templateElement;
- (void)_prepareLayout;

@end
