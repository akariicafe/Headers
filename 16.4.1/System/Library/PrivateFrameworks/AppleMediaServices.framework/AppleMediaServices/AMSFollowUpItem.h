@class AMSMetricsEvent, NSArray, NSString, NSMutableDictionary, ACAccount, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface AMSFollowUpItem : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSArray *actions;
@property (readonly, nonatomic) BOOL active;
@property (readonly, nonatomic) NSString *backingIdentifier;
@property (retain, nonatomic) NSString *bundleIconName;
@property (nonatomic) BOOL disableGrouping;
@property (nonatomic) long long displayStyle;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSString *footer;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (nonatomic, getter=isHardwareOffer) BOOL hardwareOffer;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *informativeText;
@property (retain, nonatomic) NSString *logKey;
@property (copy, nonatomic) AMSMetricsEvent *metricsEvent;
@property (nonatomic) long long priority;
@property (nonatomic) BOOL shouldPostNotification;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableDictionary *userInfo;

+ (id)backingIdentifierForIdentifier:(id)a0 account:(id)a1;
+ (id)componentsFromBackingIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)generateItem;
- (id)initWithFollowUpItem:(id)a0;
- (id)initWithIdentifier:(id)a0 account:(id)a1 priority:(long long)a2;
- (id)postMetricsWithBag:(id)a0;
- (id)postMetricsWithBagContract:(id)a0;
- (BOOL)shouldOverwriteItem:(id)a0;

@end
