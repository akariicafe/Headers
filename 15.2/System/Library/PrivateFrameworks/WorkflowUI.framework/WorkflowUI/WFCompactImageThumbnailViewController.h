@class UIImageView;

@interface WFCompactImageThumbnailViewController : WFCompactThumbnailViewController

@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) id /* block */ imageGenerator;
@property (weak, nonatomic) UIImageView *imageView;
@property (nonatomic) double lastViewWidth;

- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (double)contentHeightForWidth:(double)a0;
- (id)initWithAspectRatio:(double)a0 imageGenerator:(id /* block */)a1;
- (void)redrawImage;

@end
