@class NSString, UIWebView, UIToolbar, UINavigationBar;
@protocol SKTermsPageViewControllerDelegate;

@interface SKTermsPageViewController : UIViewController <UINavigationBarDelegate> {
    UINavigationBar *_navbar;
    NSString *_terms;
    UIToolbar *_toolbar;
    UIWebView *_webview;
}

@property (weak, nonatomic) id<SKTermsPageViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)positionForBar:(id)a0;
- (void)viewDidLoad;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)_dismissViewController;
- (unsigned long long)edgesForExtendedLayout;
- (void)_buttonDecline:(id)a0;
- (void)_dismissViewControllerAnimated:(BOOL)a0;
- (void)_buttonAccept:(id)a0;
- (void)_dismissViewControllerAnimated:(BOOL)a0 withAcceptance:(BOOL)a1;
- (void)_loadSubviews;
- (id)_markupTermsWithHTML:(id)a0;
- (id)initWithTerms:(id)a0;

@end
