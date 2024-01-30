@class NSString;

@interface TPSAnalyticsEventEligibilityCheckPerformed : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *error;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithError:(id)a0;

- (id)eventName;
- (void).cxx_destruct;
- (id)mutableAnalyticsEventRepresentation;
- (id)initWithCoder:(id)a0;
- (id)_initWithError:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
