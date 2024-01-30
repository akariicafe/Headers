@class NSString, NSNumber;

@interface TPSAnalyticsEventUsageObservations : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *eventID;
@property (retain, nonatomic) NSNumber *eventCount;
@property (readonly, nonatomic) NSString *experimentID;
@property (readonly, nonatomic) NSString *experimentCampID;

+ (id)eventWithEventID:(id)a0 eventCount:(id)a1;
+ (BOOL)supportsSecureCoding;

- (void)setDataProvider:(id)a0;
- (id)eventName;
- (void).cxx_destruct;
- (id)_initWithEventID:(id)a0 eventCount:(id)a1;
- (id)mutableAnalyticsEventRepresentation;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
