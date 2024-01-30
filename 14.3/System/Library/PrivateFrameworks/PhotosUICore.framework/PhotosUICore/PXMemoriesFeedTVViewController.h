@class NSString, UIScrollView, PXMemoriesSpecManager, PXMemoriesFeedUIViewController;

@interface PXMemoriesFeedTVViewController : UIViewController <PXChangeObserver>

@property (readonly, nonatomic) PXMemoriesSpecManager *specManager;
@property (readonly, nonatomic) UIScrollView *ppt_scrollView;
@property (retain, nonatomic) PXMemoriesFeedUIViewController *memoriesFeedController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_specDidChange:(id)a0;
- (void)viewDidLoad;

@end
