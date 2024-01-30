@class NSArray, AMSUIWebClientContext, NSString, AMSMetricsEvent;

@interface AMSUIWebAction : NSObject <AMSUIWebActionRunnable>

@property (readonly, nonatomic) AMSMetricsEvent *actionEvent;
@property (retain, nonatomic) NSArray *acceptedResponseVersions;
@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
