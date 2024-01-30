@class NSString;

@interface TPSAnalyticsEventRuleMatched : TPSAnalyticsEvent

@property (readonly, nonatomic) NSString *tipID;
@property (readonly, nonatomic) NSString *correlationID;
@property (readonly, nonatomic) NSString *ruleID;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithTipID:(id)a0 correlationID:(id)a1 ruleID:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (id)_initWithTipID:(id)a0 correlationID:(id)a1 ruleID:(id)a2;

@end
