@class NSString;

@interface TPSAnalyticsEventRuleMatched : TPSAnalyticsEvent

@property (readonly, nonatomic) NSString *contentID;
@property (readonly, nonatomic) NSString *ruleID;

+ (id)eventWithContentID:(id)a0 ruleID:(id)a1;
+ (BOOL)supportsSecureCoding;

- (id)eventName;
- (id)_initWithContentID:(id)a0 ruleID:(id)a1;
- (void).cxx_destruct;
- (id)mutableAnalyticsEventRepresentation;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
