@class NSArray, NSDictionary, AMSEngagementMessageAction, NSURL, NSString, AMSMetricsEvent;

@interface AMSEngagementMessageRequest : NSObject

@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) NSDictionary *appearanceInfo;
@property (retain, nonatomic) AMSEngagementMessageAction *defaultAction;
@property (retain, nonatomic) NSURL *iconURL;
@property (retain, nonatomic) AMSMetricsEvent *metricsEvent;
@property (nonatomic) long long presentationAction;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0;
- (id)makeDialogRequest;
- (id)_actionForMessageAction:(id)a0;

@end
