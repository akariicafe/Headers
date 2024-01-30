@class EKTravelEngineHypothesis, NSDate;

@interface CALNTriggeredEventNotificationResponseData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) EKTravelEngineHypothesis *hypothesis;
@property (readonly, copy, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithHypothesis:(id)a0 lastFireTimeOfAlertOffsetFromTravelTime:(id)a1;

@end
