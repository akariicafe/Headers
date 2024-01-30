@class NSString, AMSUIWebNavigationBarModel, AMSUIWebClientContext;
@protocol AMSUIWebActionRunnable;

@interface AMSUIWebErrorPageModel : NSObject <AMSUIWebPageProvider>

@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) id<AMSUIWebActionRunnable> action;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) NSString *actionButtonTitle;
@property (readonly, nonatomic) NSString *errorMessage;
@property (nonatomic) BOOL errorMessageInternalOnly;
@property (retain, nonatomic) NSString *errorTitle;
@property (readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar;
@property (readonly, nonatomic) NSString *backgroundColor;
@property (readonly, nonatomic) BOOL disableReappearPlaceholder;
@property (readonly, nonatomic) struct CGSize { double width; double height; } windowSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_messageFromError:(id)a0;

@end
