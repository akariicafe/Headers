@class NSString;

@interface TPSAnalyticsEventEligibilityCheckPerformed : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *error;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithError:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (id)_initWithError:(id)a0;

@end
