@class NSArray;

@interface PPTripEvent : PPScoredEvent

@property (readonly, nonatomic) NSArray *tripParts;

+ (BOOL)supportsSecureCoding;

- (id)destinations;
- (void)encodeWithCoder:(id)a0;
- (id)destinationsBasedTitle;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 tripParts:(id)a2;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
