@class VideosExtrasBannerController, VideosExtrasGridElementViewController;

@interface VideosExtrasGalleryTemplateViewController : VideosExtrasTemplateViewController {
    VideosExtrasBannerController *_bannerController;
    VideosExtrasGridElementViewController *_gridViewController;
}

@property (nonatomic) unsigned long long selectedItemIndex;

- (void)viewDidLoad;
- (id)contentScrollView;
- (void).cxx_destruct;
- (id)templateElement;
- (void)_prepareLayout;
- (BOOL)showsPlaceholder;

@end
