@class AMSDialogRequest, NSString, NSDictionary, NSURL, NSMutableDictionary, NSURLRequest, AMSMetricsEvent;

@interface AMSDialogAction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, setter=ams_setCommerceUIURL:) BOOL ams_commerceUIURL;
@property (nonatomic, setter=ams_setActionType:) long long ams_actionType;
@property (retain, nonatomic, setter=ams_setBuyParams:) NSString *ams_buyParams;
@property (retain, nonatomic, setter=ams_setButtonDictionary:) NSDictionary *ams_buttonDictionary;
@property (retain, nonatomic, setter=ams_setMetricsDictionary:) NSDictionary *ams_metricsDictionary;
@property (retain, nonatomic, setter=ams_setRawURL:) NSURL *ams_rawURL;
@property (nonatomic, setter=ams_setResolvedInterruption:) BOOL ams_resolvedInterruption;
@property (nonatomic, setter=ams_setShouldRetry:) BOOL ams_shouldRetry;
@property (retain, nonatomic, setter=ams_setSubtarget:) NSString *ams_subtarget;
@property (nonatomic, setter=ams_setTidContinue:) BOOL ams_tidContinue;
@property (nonatomic, setter=ams_setURLType:) long long ams_URLType;
@property (copy, nonatomic) NSURL *deepLink;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL inferLinkDestination;
@property (copy, nonatomic) AMSMetricsEvent *metricsEvent;
@property (copy, nonatomic) NSURLRequest *request;
@property (nonatomic) long long style;
@property (copy, nonatomic) AMSDialogRequest *dialogRequest;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSURL *iconURL;
@property (copy, nonatomic) NSMutableDictionary *userInfo;
@property (nonatomic) BOOL shouldRetry;

+ (id)actionWithTitle:(id)a0 identifier:(id)a1;
+ (id)actionWithTitle:(id)a0 style:(long long)a1;
+ (id)actionWithTitle:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
