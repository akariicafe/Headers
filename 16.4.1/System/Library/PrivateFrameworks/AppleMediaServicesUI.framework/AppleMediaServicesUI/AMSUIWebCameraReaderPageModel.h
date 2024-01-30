@class AMSUIWebNavigationBarModel, NSString, AMSUIWebClientContext, AMSMetricsEvent, UIViewController;
@protocol AMSUIWebActionRunnable;

@interface AMSUIWebCameraReaderPageModel : NSObject <AMSUIWebPageProvider>

@property (retain, nonatomic) id<AMSUIWebActionRunnable> action;
@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (weak, nonatomic) UIViewController *presentedViewController;
@property (nonatomic) BOOL allowsCameraToggle;
@property (nonatomic) BOOL allowsTextEntry;
@property (retain, nonatomic) NSString *bottomLinkLabel;
@property (retain, nonatomic) id<AMSUIWebActionRunnable> bottomLinkAction;
@property (nonatomic, getter=isFullScreen) BOOL fullScreen;
@property (nonatomic) long long pageType;
@property (retain, nonatomic) NSString *primaryLabel;
@property (retain, nonatomic) NSString *secondaryLabel;
@property (retain, nonatomic) NSString *textFieldPlaceholder;
@property (readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar;
@property (readonly, nonatomic) NSString *backgroundColor;
@property (readonly, nonatomic) AMSMetricsEvent *impressionEvent;
@property (readonly, nonatomic) BOOL disableReappearPlaceholder;
@property (readonly, nonatomic) struct CGSize { double width; double height; } windowSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createViewControllerForContainer:(id)a0;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)loadPage;

@end
