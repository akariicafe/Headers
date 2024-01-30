@class NSString, AMSUIWebClientContext, AMSUIWebLoadingPageModel, NSDictionary, AMSUIWebNavigationBarModel;
@protocol AMSUIWebPageProvider;

@interface AMSUIWebFlowAction : NSObject <AMSUIWebActionRunnable>

@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) id actionData;
@property (nonatomic) long long animationType;
@property (nonatomic) BOOL deferredPresentation;
@property (retain, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) AMSUIWebLoadingPageModel *loadingPage;
@property (retain, nonatomic) NSDictionary *metrics;
@property (nonatomic) struct CGSize { double width; double height; } modalWindowSize;
@property (retain, nonatomic) AMSUIWebNavigationBarModel *navigationBar;
@property (nonatomic) long long presentationType;
@property (retain, nonatomic) id<AMSUIWebPageProvider> replacementPage;
@property (nonatomic) long long replacementType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;
- (void)_runWithType:(long long)a0 options:(id)a1;

@end
