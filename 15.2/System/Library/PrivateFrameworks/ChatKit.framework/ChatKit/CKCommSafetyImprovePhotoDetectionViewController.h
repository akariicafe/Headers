@class UIImageView;

@interface CKCommSafetyImprovePhotoDetectionViewController : UIViewController

@property (retain, nonatomic) UIImageView *imageView;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)configureImageFromChatItem:(id)a0;
- (void)layoutImageView;
- (void).cxx_destruct;
- (id)initWithChatItem:(id)a0;

@end
