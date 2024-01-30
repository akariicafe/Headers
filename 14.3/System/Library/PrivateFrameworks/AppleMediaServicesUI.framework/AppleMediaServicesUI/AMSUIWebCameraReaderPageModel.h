@class AMSUIWebNavigationBarModel, NSString, AMSUIWebClientContext, UIViewController;
@protocol AMSUIWebActionRunnable;

@interface AMSUIWebCameraReaderPageModel : NSObject <AMSUIWebPageProvider>

@property (retain, nonatomic) id<AMSUIWebActionRunnable> action;
@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (weak, nonatomic) UIViewController *presentedViewController;
@property (retain, nonatomic) NSString *bottomLinkLabel;
@property (retain, nonatomic) id<AMSUIWebActionRunnable> bottomLinkAction;
@property (nonatomic) long long pageType;
@property (retain, nonatomic) NSString *primaryLabel;
@property (retain, nonatomic) NSString *secondaryLabel;
@property (readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar;
@property (readonly, nonatomic) NSString *backgroundColor;
@property (readonly, nonatomic) BOOL disableReappearPlaceholder;
@property (readonly, nonatomic) struct CGSize { double width; double height; } windowSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createViewController;
- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
