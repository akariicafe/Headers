@class NSString, NSDictionary, NSURL, NSURLRequest, AMSMetricsEvent;

@interface AMSUserNotificationAction : NSObject

@property (readonly, nonatomic) unsigned long long un_ActionOptions;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSURL *defaultURL;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) AMSMetricsEvent *metricsEvent;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) long long style;

- (id)initWithTitle:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 style:(long long)a1;
- (id)initWithUserInfoAction:(id)a0;
- (id)generateUserInfoAction;

@end
