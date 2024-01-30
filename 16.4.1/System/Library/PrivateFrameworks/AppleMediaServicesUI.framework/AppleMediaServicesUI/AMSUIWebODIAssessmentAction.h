@class NSDictionary, NSString, AMSUIWebClientContext;

@interface AMSUIWebODIAssessmentAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain, nonatomic) NSDictionary *additionalAttributes;
@property (retain, nonatomic) NSString *rawAccountType;
@property (retain, nonatomic) NSString *rawBundleIdentifer;
@property (retain, nonatomic) NSString *rawSessionIdentifer;
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
