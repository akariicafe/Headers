@class NSDictionary, AMSUIWebActivityIndicatorModel, NSString;
@protocol AMSUIWebActionRunnable;

@interface AMSUIWebButtonModel : NSObject <AMSUIWebModelInterface>

@property (retain, nonatomic) NSDictionary *underlyingJSObject;
@property (retain, nonatomic) id<AMSUIWebActionRunnable> action;
@property (retain, nonatomic) AMSUIWebActivityIndicatorModel *activityIndicator;
@property (nonatomic) BOOL bold;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
