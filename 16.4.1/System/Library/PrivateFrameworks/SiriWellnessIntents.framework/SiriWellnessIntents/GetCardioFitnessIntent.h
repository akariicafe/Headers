@class NSString, NSDate;

@interface GetCardioFitnessIntent : INIntent

@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSString *unit;

- (id)initWithCoder:(id)a0;
- (id)init;

@end
