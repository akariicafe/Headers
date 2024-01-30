@class NSDate;

@interface GetAmbiguousDistanceIntent : INIntent

@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, copy) NSDate *endDate;

- (id)initWithCoder:(id)a0;
- (id)init;

@end
