@class NSString, SKUIClientContext, SKUIProductPageHeaderViewController, NSError, UIScrollView;
@protocol SKUINetworkErrorDelegate;

@interface SKUINetworkErrorViewController : UIViewController <SKUIProductPageChildViewController>

@property (readonly, nonatomic) NSError *error;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id<SKUINetworkErrorDelegate> delegate;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canDisplayError:(id)a0;

- (void)dealloc;
- (id)initWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)_networkTypeChanged:(id)a0;

@end
