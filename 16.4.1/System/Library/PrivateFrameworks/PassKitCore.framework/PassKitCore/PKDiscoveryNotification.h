@class NSString, NSDictionary, NSURL, NSDate;

@interface PKDiscoveryNotification : PKDiscoveryObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long actionType;
@property (retain, nonatomic) NSDictionary *actionInfo;
@property (copy, nonatomic) NSString *titleKey;
@property (copy, nonatomic) NSString *messageKey;
@property (copy, nonatomic) NSString *actionTitleKey;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedMessage;
@property (readonly, copy, nonatomic) NSString *localizedActionTitle;
@property (readonly, nonatomic) long long passQualifier;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *discoveryCardIdentifier;
@property (retain, nonatomic) NSDate *scheduledDeliveryDate;
@property (nonatomic, getter=isDelivered) BOOL delivered;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)scheduleDeliveryForCurrentDate:(id)a0;
- (BOOL)isEqualForDisplayToNotification:(id)a0;
- (void)localizeWithBundle:(id)a0;
- (void)updateForRuleResult:(BOOL)a0;
- (void)updateWithNotification:(id)a0;

@end
