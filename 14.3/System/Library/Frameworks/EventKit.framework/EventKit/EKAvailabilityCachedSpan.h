@class EKAvailabilitySpan, NSDate;

@interface EKAvailabilityCachedSpan : NSObject

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) EKAvailabilitySpan *span;

- (void).cxx_destruct;
- (id)initWithSpan:(id)a0;
- (id)description;

@end
