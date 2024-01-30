@class NSString, NSNumber;

@interface TPSAnalyticsEventFrequencyControl : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *displayType;
@property (retain, nonatomic) NSNumber *displayCount;
@property (retain, nonatomic) NSNumber *notDisplayedDueToFrequencyControlCount;
@property (retain, nonatomic) NSString *experimentID;
@property (retain, nonatomic) NSString *experimentCampID;

+ (BOOL)supportsSecureCoding;

- (void)setDataProvider:(id)a0;
- (id)initWithDisplayType:(id)a0 displayCount:(id)a1 notDisplayedDueToFrequencyControlCount:(id)a2;
- (id)eventName;
- (void).cxx_destruct;
- (id)mutableAnalyticsEventRepresentation;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
