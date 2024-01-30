@class NSNumber;

@interface IDSGFTMetricsReferencePointEvent : NSObject

@property (copy) NSNumber *reason;
@property (copy) NSNumber *time;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTime:(id)a0 reason:(id)a1;

@end
