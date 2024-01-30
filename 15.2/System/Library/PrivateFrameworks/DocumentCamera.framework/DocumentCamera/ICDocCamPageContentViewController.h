@class UIImageView, UIImage;
@protocol ICDocCamPageContentViewTapDelegate;

@interface ICDocCamPageContentViewController : UIViewController

@property (weak, nonatomic) UIImageView *imageView;
@property (nonatomic) unsigned long long pageIndex;
@property (retain, nonatomic) UIImage *image;
@property (weak, nonatomic) id<ICDocCamPageContentViewTapDelegate> tapDelegate;

+ (double)leadingTrailingOffset:(long long)a0;

- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)handleSingleTap:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;

@end
