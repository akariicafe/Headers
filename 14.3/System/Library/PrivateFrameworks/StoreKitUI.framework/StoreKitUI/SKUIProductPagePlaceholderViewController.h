@class SKUIColorScheme, NSString, SKUIClientContext, SKUIProductPageHeaderViewController, UIScrollView, SKUIProductPagePlaceholderScrollView, UIActivityIndicatorView;
@protocol SKUIProductPageChildViewControllerDelegate;

@interface SKUIProductPagePlaceholderViewController : UIViewController <UIScrollViewDelegate, SKUIProductPageChildViewController> {
    SKUIProductPagePlaceholderScrollView *_scrollView;
    long long _style;
    UIActivityIndicatorView *_indicator;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController;
@property (weak, nonatomic) id<SKUIProductPageChildViewControllerDelegate> delegate;

- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)loadView;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_addHeaderView;

@end
