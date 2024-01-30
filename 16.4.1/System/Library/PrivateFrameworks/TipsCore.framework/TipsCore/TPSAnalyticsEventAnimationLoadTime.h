@class NSString;

@interface TPSAnalyticsEventAnimationLoadTime : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *tipID;
@property (nonatomic) double animationLoadTime;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithTipID:(id)a0 animationLoadTime:(double)a1;

- (void)encodeWithCoder:(id)a0;
- (id)eventName;
- (id)initWithCoder:(id)a0;
- (id)mutableAnalyticsEventRepresentation;
- (void).cxx_destruct;
- (id)_initWithTipID:(id)a0 animationLoadTime:(double)a1;

@end
