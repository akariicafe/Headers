@class SKUIEmbeddedMediaView, SKUIMediaComponent;

@interface SKUIGalleryPaneViewController : UIViewController

@property (readonly, nonatomic) SKUIMediaComponent *component;
@property (readonly, nonatomic) long long galleryIndex;
@property (readonly, nonatomic) SKUIEmbeddedMediaView *mediaView;

- (void).cxx_destruct;
- (id)initWithMediaComponent:(id)a0 galleryIndex:(long long)a1;

@end
