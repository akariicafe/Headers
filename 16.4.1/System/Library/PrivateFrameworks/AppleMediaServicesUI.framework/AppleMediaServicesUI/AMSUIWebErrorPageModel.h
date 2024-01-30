@class AMSMetricsEvent, NSString, NSBundle, AMSUIWebClientContext, NSError, AMSUIWebNavigationBarModel;
@protocol AMSUIWebActionRunnable;

@interface AMSUIWebErrorPageModel : NSObject <AMSUIWebPageProvider>

@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) id<AMSUIWebActionRunnable> action;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) NSString *actionButtonTitle;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *errorMessage;
@property (nonatomic) BOOL errorMessageInternalOnly;
@property (retain, nonatomic) NSString *errorTitle;
@property (readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar;
@property (readonly, nonatomic) NSString *backgroundColor;
@property (readonly, nonatomic) AMSMetricsEvent *impressionEvent;
@property (readonly, nonatomic) BOOL disableReappearPlaceholder;
@property (readonly, nonatomic) struct CGSize { double width; double height; } windowSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_messageFromError:(id)a0;

- (void).cxx_destruct;
- (id)createViewControllerForContainer:(id)a0;
- (id)initWithError:(id)a0 context:(id)a1 actionBlock:(id /* block */)a2;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)loadPage;

@end
