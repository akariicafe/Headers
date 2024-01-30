@class NSNumber, NSString;

@interface HKPopulationNormsAxisLabel : NSObject

@property (retain, nonatomic) NSNumber *rangeStart;
@property (readonly, nonatomic) NSNumber *rangeEnd;
@property (readonly, nonatomic) NSString *separatorString;

- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)initWithValue:(id)a0;
- (id)initWithRangeStart:(id)a0 end:(id)a1;

@end
