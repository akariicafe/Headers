@class NSNumber, NSString;

@interface HKPopulationNormsAxisLabel : NSObject

@property (copy, nonatomic) NSNumber *rangeStart;
@property (readonly, copy, nonatomic) NSNumber *rangeEnd;
@property (readonly, nonatomic) NSString *separatorString;

- (id)stringRepresentation;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0;
- (id)initWithRangeStart:(id)a0 end:(id)a1;

@end
