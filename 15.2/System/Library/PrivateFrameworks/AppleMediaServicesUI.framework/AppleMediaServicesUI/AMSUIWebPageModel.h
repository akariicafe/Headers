@class AMSMetricsEvent, NSString, AMSUIWebClientContext, AMSUIWebNavigationBarModel;

@interface AMSUIWebPageModel : NSObject <AMSUIWebPageProvider>

@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (nonatomic) BOOL ignoreBottomSafeArea;
@property (nonatomic) BOOL ignoreTopSafeArea;
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
- (id)createViewController;
- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
