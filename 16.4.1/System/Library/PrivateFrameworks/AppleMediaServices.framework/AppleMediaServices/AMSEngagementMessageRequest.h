@class AMSMetricsEvent, NSArray, NSDictionary, AMSEngagementMessageAction, NSURL, NSString, AMSEngagementRequest;

@interface AMSEngagementMessageRequest : NSObject

@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) NSDictionary *appearanceInfo;
@property (copy, nonatomic) NSDictionary *clickstreamMetricsEvent;
@property (retain, nonatomic) AMSEngagementMessageAction *defaultAction;
@property (retain, nonatomic) AMSEngagementRequest *engagementRequest;
@property (retain, nonatomic) NSURL *iconURL;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) AMSMetricsEvent *metricsEvent;
@property (nonatomic) long long presentationAction;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)_actionForMessageAction:(id)a0;
- (id)initWithJSObject:(id)a0;
- (id)makeDialogRequest;

@end
