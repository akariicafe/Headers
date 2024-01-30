@class NSURL, NSString, AMSMetricsEvent;

@interface AMSEngagementMessageAction : NSObject

@property (retain, nonatomic) NSURL *deepLink;
@property (retain, nonatomic) NSURL *iconURL;
@property (retain, nonatomic) AMSMetricsEvent *metricsEvent;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0;

@end
