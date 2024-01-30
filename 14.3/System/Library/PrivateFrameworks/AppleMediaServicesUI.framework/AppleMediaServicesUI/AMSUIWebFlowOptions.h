@class NSString, NSDictionary, AMSUIWebLoadingPageModel, AMSUIWebNavigationBarModel;

@interface AMSUIWebFlowOptions : NSObject

@property (nonatomic) BOOL animated;
@property (retain, nonatomic) NSString *backgroundColor;
@property (nonatomic) BOOL deferredPresentation;
@property (nonatomic) BOOL initialLoad;
@property (nonatomic) BOOL reuseExistingPage;
@property (retain, nonatomic) AMSUIWebLoadingPageModel *loadingPage;
@property (nonatomic) long long modalPresentationStyle;
@property (nonatomic) long long modalTransitionStyle;
@property (retain, nonatomic) AMSUIWebNavigationBarModel *navigationBar;
@property (retain, nonatomic) NSDictionary *pageData;

- (void).cxx_destruct;

@end
