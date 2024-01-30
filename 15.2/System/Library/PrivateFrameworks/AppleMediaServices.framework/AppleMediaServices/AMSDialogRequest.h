@class AMSDialogAction, NSArray, NSDictionary, NSURL, NSString, AMSMetricsEvent;

@interface AMSDialogRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *appearanceInfo;
@property (copy, nonatomic) NSArray *buttonActions;
@property (retain, nonatomic) AMSDialogAction *defaultAction;
@property (copy, nonatomic) NSURL *iconBundleURL;
@property (copy, nonatomic) NSURL *iconURL;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *logKey;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) AMSMetricsEvent *metricsEvent;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSArray *textFields;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (id)requestWithTitle:(id)a0 message:(id)a1;

- (id)initWithTitle:(id)a0 message:(id)a1;
- (id)initWithError:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)addTextField:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)replaceAction:(id)a0;
- (id)initWithTitle:(id)a0 message:(id)a1 appearanceInfo:(id)a2;
- (id)locateActionWithIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addButtonAction:(id)a0;

@end
