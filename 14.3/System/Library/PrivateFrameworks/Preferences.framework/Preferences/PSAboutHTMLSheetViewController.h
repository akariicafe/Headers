@class NSString;

@interface PSAboutHTMLSheetViewController : UIViewController <UIWebViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)presentAboutSheetTitled:(id)a0 HTMLContent:(id)a1 fromViewController:(id)a2;

- (void)dealloc;
- (void)loadView;
- (void)viewDidBecomeVisible;
- (BOOL)webView:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2;
- (void)donePressed;
- (void)setHTMLContent:(id)a0 isFragment:(BOOL)a1;

@end
