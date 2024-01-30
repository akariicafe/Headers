@class AMSDialogAction, NSArray, NSString, NSURL, NSDictionary, AMSMetricsEvent;

@interface AMSDialogRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *buttonActions;
@property (retain, nonatomic) AMSDialogAction *defaultAction;
@property (copy, nonatomic) NSURL *iconBundleURL;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *logKey;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) AMSMetricsEvent *metricsEvent;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSArray *textFields;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (id)requestWithTitle:(id)a0 message:(id)a1;

- (id)initWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addTextField:(id)a0;
- (void)replaceAction:(id)a0;
- (id)locateActionWithIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithTitle:(id)a0 message:(id)a1;
- (void)addButtonAction:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
