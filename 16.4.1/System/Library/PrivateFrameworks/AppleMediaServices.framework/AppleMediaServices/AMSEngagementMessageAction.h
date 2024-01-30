@class NSString, NSDictionary, NSURL, AMSMetricsEvent;

@interface AMSEngagementMessageAction : NSObject

@property (copy, nonatomic) NSDictionary *clickstreamMetricsEvent;
@property (retain, nonatomic) NSURL *deepLink;
@property (retain, nonatomic) NSURL *iconURL;
@property (copy, nonatomic) AMSMetricsEvent *metricsEvent;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0;

@end
