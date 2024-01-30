@class VideosExtrasBannerController, VideosExtrasGridElementViewController;

@interface VideosExtrasGalleryTemplateViewController : VideosExtrasTemplateViewController {
    VideosExtrasBannerController *_bannerController;
    VideosExtrasGridElementViewController *_gridViewController;
}

@property (nonatomic) unsigned long long selectedItemIndex;

- (id)contentScrollView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)templateElement;
- (void)_prepareLayout;
- (BOOL)showsPlaceholder;

@end
